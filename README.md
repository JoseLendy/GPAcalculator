# GPAcalculator

A small C++ command-line GPA calculator. Work in progress.

## Structure

| File | Purpose |
| --- | --- |
| `main.cpp` | Entry point |
| `input.hpp` / `input.cpp` | `Student` / `Student::Data` types and course input prompts |
| `calculate.hpp` / `calculate.cpp` | Weighted GPA (4.0 scale) and 100-scale averages |
| `print.hpp` / `print.cpp` | Formatted output of a `Student` and its courses |

## Build

Requires CMake 3.20+ and a C++17 compiler.

```sh
cmake -B build          # configure (only needed once, or after editing CMakeLists.txt)
cmake --build build     # compile
./build/gpa_calculator  # run
```

## Status

Work in progress. Known issues:

- `input()` leaves the trailing newline in `std::cin` after reading `credit`, so
  entering more than one course misreads input and produces wrong totals.
- `printStudentData()` is written but never called; `main()` still prints inline.
