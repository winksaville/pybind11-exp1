#include <pybind11/pybind11.h>

#include "arith.hxx"

PYBIND11_MODULE(exp1, m) {
    m.doc() = "pybind11 experiment 1 plugin"; // optional module docstring

    m.def("add", &add, "A function which adds two numbers");
}

