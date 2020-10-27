project(arith VERSION 0.3.0 DESCRIPTION "arithmatic library")

add_library(arith SHARED src/add.cxx)

set_target_properties(arith PROPERTIES
    VERSION ${PROJECT_VERSION}
    SOVERSION 1
    PUBLIC_HEADER inc/arith.hxx)

target_include_directories(arith PRIVATE ${CMAKE_SOURCE_DIR}/arith/inc)

install(TARGETS arith
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
