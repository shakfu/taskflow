import os
from glob import glob
from setuptools import setup
from pybind11.setup_helpers import Pybind11Extension

os.environ['LDFLAGS'] = " ".join([
    "-framework CoreFoundation",
])

os.environ['CPPFLAGS'] = " ".join([
     "-std=c++17",
])

os.environ['CC'] = " ".join([
     "clang++",
])



DEFINE_MACROS = [
    ('HAVE_UNISTD_H', 1),
]

INCLUDE_DIRS = [
    "include",
    "/usr/local/include",
]

LIBRARIES = [
    'm',
    'dl',
    'pthread',
]

LIBRARY_DIRS = [
    '/usr/local/lib',
]

EXTRA_OBJECTS = [
    # '../libs/lib.a',
]


SOURCES = sorted(glob("bind/**/*.cpp"))

LIBPD_EXTENSION = Pybind11Extension("taskflow",
    SOURCES,  # Sort source files for reproducibility
    define_macros = DEFINE_MACROS,
    include_dirs = INCLUDE_DIRS,
    libraries = LIBRARIES,
    library_dirs = LIBRARY_DIRS,
    extra_objects = EXTRA_OBJECTS,
)



setup(
    name="taskflow in pybind11", 
    ext_modules=[LIBPD_EXTENSION],
)


