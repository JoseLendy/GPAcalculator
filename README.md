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

- `printStudentData()` is written but never called; `main()` still prints inline.
- `Student` is defined in `input.hpp`, so every module has to include the input
  header just to see the data model.
- `Student::Data` uses `float` while `Student` uses `double`.
- `total_credit` is declared but never used; `calculate.cpp` re-sums credits instead.
