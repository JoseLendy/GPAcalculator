cmake_minimum_required(VERSION 3.20)

project(gpa_calculator
    VERSION 0.1.0
    DESCRIPTION "Command-line GPA calculator"
    LANGUAGES CXX)

# Generate compile_commands.json so editors/clangd pick up include paths and flags.
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(gpa_calculator
    main.cpp
    input.cpp
    calculate.cpp
    print.cpp)

target_compile_features(gpa_calculator PRIVATE cxx_std_17)

target_compile_options(gpa_calculator PRIVATE
    $<$<CXX_COMPILER_ID:GNU,Clang,AppleClang>:-Wall -Wextra>
    $<$<CXX_COMPILER_ID:MSVC>:/W4>)
