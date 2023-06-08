cmake_minimum_required(VERSION 3.5)

project(kata)

set(INCLUDES
    ${PROJECT_SOURCE_DIR}/src
    ${PROJECT_SOURCE_DIR}/vendor
)

set(CFLAGS
    -g -O0 -Werror
)

set(SOURCES
    src/example.c
    src/example.cpp
    test/example.test.cpp
)

add_executable(test_example ${SOURCES})
target_compile_options(test_example PRIVATE ${CFLAGS})
target_include_directories(test_example PRIVATE ${INCLUDES})
