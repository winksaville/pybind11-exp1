# pybind11 experiment 1

Goal to create a simple python module that uses
a C++ library and can be added to test.pypi.org

## Clone
```
git clone --recursive https://github.com/winksaville/pybind11-exp1
```
If you forget to use --recursive then do `git submodule update --init --recursive`
after cloning
```
git clone https://github.com/winksaville/pybind11-exp1
cd pybind11-exp1
git submodule update --init --recursive
```

## Generate, build, install and run
```
cmake -S . -B build -G Ninja -DCMAKE_INSTALL_PREFIX=~/opt/exp1
cmake --build build
cmake --install build
export PYTHONPATH=~/opt/exp1/lib
./useexample.py
```

## Test
TODO

## Complete Example
```
wink@3900x:~/prgs/python/projects/pybind11-exp1 (master)
$ rm -rf build/
wink@3900x:~/prgs/python/projects/pybind11-exp1 (master)
$ cmake -S . -B build -G Ninja -DCMAKE_INSTALL_PREFIX=~/opt/exp1
-- The C compiler identification is GNU 10.2.0
-- The CXX compiler identification is GNU 10.2.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- pybind11 v2.6.1 dev1
-- Found PythonInterp: /usr/bin/python3.8 (found version "3.8.6") 
-- Found PythonLibs: /usr/lib/libpython3.8.so
-- Performing Test HAS_FLTO
-- Performing Test HAS_FLTO - Success
-- Configuring done
-- Generating done
-- Build files have been written to: /home/wink/prgs/python/projects/pybind11-exp1/build
wink@3900x:~/prgs/python/projects/pybind11-exp1 (master)
$ cmake --build build
[5/5] Linking CXX shared module example/example.cpython-38-x86_64-linux-gnu.so
wink@3900x:~/prgs/python/projects/pybind11-exp1 (master)
$ cmake --install build
-- Install configuration: ""
-- Installing: /home/wink/opt/exp1/lib/libarith.so.0.2.0
-- Installing: /home/wink/opt/exp1/lib/libarith.so.1
-- Installing: /home/wink/opt/exp1/lib/libarith.so
-- Installing: /home/wink/opt/exp1/include/arith.hxx
-- Installing: /home/wink/opt/exp1/lib/example.cpython-38-x86_64-linux-gnu.so
-- Set runtime path of "/home/wink/opt/exp1/lib/example.cpython-38-x86_64-linux-gnu.so" to "/home/wink/opt/exp1/lib"
wink@3900x:~/prgs/python/projects/pybind11-exp1 (master)
$ export PYTHONPATH="$HOME/opt/exp1/lib"
wink@3900x:~/prgs/python/projects/pybind11-exp1 (master)
$ ./useexample.py 
result=7
```
