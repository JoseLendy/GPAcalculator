# GPAcalculator

A small C++ command-line GPA calculator. Work in progress.

## Structure

| File | Purpose |
| --- | --- |
| `main.cpp` | Entry point |
| `input.hpp` / `input.cpp` | `Student` / `Student::Data` types and course input prompts |
| `calculate.hpp` / `calculate.cpp` | Weighted GPA (4.0 scale) and 100-scale averages |

## Build

```sh
g++ -std=c++17 main.cpp input.cpp calculate.cpp -o gpa_calculator
./gpa_calculator
```

## Status

`main.cpp` does not define `main()` yet, so the program won't link until the
driver loop (read courses → accumulate → print totals) is written.
