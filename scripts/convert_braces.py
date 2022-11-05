"""

recursively converts

    #include "sub/foo.h"   -> #include <sub/foo.h>

    also

    #include "sub/foo.hpp" -> #include <sub/foo.hpp>

    also

    #include "../foo.h" -> #include <sub/foo.h>

function absolute(base, rel) {
    var st = base.split("/");
    var arr = rel.split("/");
    st.pop(); // ignore the current file name (or no string)
    // (ignore if "base" is the current folder without having slash in trail)
    for (var i = 0; i < arr.length; i++) {
        if (arr[i] == ".")
            continue;
        if (arr[i] == "..")
            st.pop();
        else
            st.push(arr[i]);
    }
    return st.join("/");
}

"""
import os
import re
import glob
import argparse
import shutil

from os.path import dirname, join, basename

pattern = re.compile(r'^#include \"(.+)\"')

SUFFIXES = ['.h', '.hpp']



def absolute(base, rel):
    st = base.split('/')
    arr = rel.split('/')
    st.pop()
    for i in range(len(arr)):
        if arr[i] == '.':
            continue
        if arr[i] == '..':
            st.pop()
        else:
            st.append(arr[i])
    return "/".join(st)


def convert_to_braces0(line, include):
    headerpath = include.lstrip('include/')
    m = pattern.match(line)
    if m:
        ref = m.group(1)
        parts = ref.split('/')
        if len(parts) == 1: # -> sibling
            assert not ref.startswith('..')
            entry = join(dirname(headerpath), ref)
        elif len(parts) == 2:
            entry = join(dirname(dirname(headerpath)), ref.lstrip('../'))
        elif len(parts) == 3:
            entry = join(dirname(dirname(headerpath)), ref.lstrip('../'))
        else:
            entry = ref
        # print(entry)
        return f'#include <{entry}>\n'
    raise ValueError

def convert_to_braces(line, include):
    headerpath = include.lstrip('include/')
    m = pattern.match(line)
    if m:
        ref = m.group(1)
        entry = absolute(headerpath, ref)
        return f'#include <{entry}>\n'
    raise ValueError

def convert_headers_to_braces_by_suffix(path, suffix='.h'):
    print(f"convert for suffix {suffix}")
    includes = glob.glob(f"{path}/**/*{suffix}")
    for include in includes:
        # print(include)
        with open(include) as f:
            lines = f.readlines()
        _result = []
        for line in lines:
            if line.startswith("#include "):
                if line.endswith('"\n'):
                    line = line.strip()
                    converted = convert_to_braces(line, include)
                    _result.append(converted)
                    print(line, '->', converted.strip())
                    continue

            _result.append(line)
        with open(include, 'w') as g:
            g.writelines(_result)
        # print()

def convert_headers_to_braces(path):
    for suffix in SUFFIXES:
        convert_headers_to_braces_by_suffix(path, suffix)

def dump(path, suffix='.hpp'):
    includes = glob.glob(f"{path}/**/*{suffix}")
    for f in includes:
        print(f)


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description='Convert headers to point braces (backups swill be made).')
    parser.add_argument('path', help='path to include directory')
    args = parser.parse_args()
    if args.path:
        # shutil.copytree(args.path, f'{args.path}__BACKUP')
        convert_headers_to_braces(args.path)
        # dump(args.path)

