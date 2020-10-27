project(exp1 VERSION 0.1.0 DESCRIPTION "Experimental cpython extension")

# Below we set RPATH for the exp1.xxx.so so that when it is loaded
# the arith library can be found. But, for this exp1.xxx.so to be found
# PYTHONPATH needs to be set! HOPEFULLY, we can solve this when we
# add setup.py.

# Set the install RPATH so after installing exp1 can find the arth library
set(CMAKE_INSTALL_RPATH ${CMAKE_INSTALL_PREFIX}/lib)

# Set the build RPATH so tests or while developing exp1 can find the arth library
set(CMAKE_BUILD_RPATH ${CMAKE_BINARY_DIR}/arith)

# Add pybind11 so we can use the pybind11_add_module
add_subdirectory(pybind11)
pybind11_add_module(exp1 src/exp1.cxx)

# Specify exp1 has the arith library as a dependency
target_link_libraries(exp1 PUBLIC arith)

# Specify where exp1 can find arith library include while building
target_include_directories(exp1 PRIVATE ${CMAKE_SOURCE_DIR}/arith/inc)

# Install exampe.*.so into the install library directory
install(TARGETS exp1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
