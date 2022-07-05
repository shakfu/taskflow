# taskflow wrapper using pybind11

Uses [binder](https://github.com/RosettaCommons/binder), a tool to
autogenerate pybind11 bindings for c++ code.

## To build and test binder

1. `brew install cmake ninja pybind11`

2. build binder using the `build.py` script in the `binder` repo. Ignore the documentation
   since it has dated installation instructions.

3. copy or move the resulting `build` binder directory to `~/.binder` and
   symlink as follows: `~/.binder/bin/binder` to `/usr/local/bin/binder`

## To generate bindings for taskflow

Run `make` in this directory to generate bindings

## Status

- incomplete bindings

## TODO

- [ ] fix binder generations issues 

