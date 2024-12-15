# Calculator with CI Integration

A simple C++ project that performs basic arithmetic operations. This project includes unit testing using Google Test and is integrated with GitHub Actions for Continuous Integration (CI).

## Features

- Basic arithmetic operations:
  - Addition
  - Subtraction
  - Multiplication
  - Division
- Unit tests to ensure code reliability.
- Continuous Integration with GitHub Actions.

## Requirements

To build and test this project locally, ensure you have the following installed:

- C++ compiler (e.g., GCC)
- CMake
- Google Test library

## Project Structure
```
├── Calculator.cpp
├── CMakeLists.txt
├── README.md
└── test
    └── test_calculator.cpp
```
## How to Build and Run Tests Locally

1. Clone the repository:
   ```bash
   git clone https://github.com/imadenugraha/cpp-gtest-example.git
   cd cpp-gtest-example
   ```
2. Create a build directory:
   ```bash
   mkdir build && cd build
   ```
3. Run cmake to configure the project:
   ```bash
   cmake ..
   ```
4. Build the project:
   ```bash
   make
   ```
5. Run the test:
   ```bash
   ./test_calculator
   ```

## Continuous Integration with GitHub Actions

This project is integrated with GitHub Actions for automatic testing. The CI pipeline:

- Runs on every `push` or `pull request` to the `main` branch.
- Builds the project using CMake.
- Executes all unit tests.

To view the CI status, navigate to the Actions tab in your GitHub repository.

## Example Usage

Here is an example of how to use the `Calculator` class:

```cpp
#include <iostream>
#include "Calculator.cpp"

int main()
{
    Calculator calc;
    std::cout << "3 + 2 = " << calc::add(3, 2) << std::endl;
    std::cout << "5 - 3 = " << calc::subtract(5, 3) << std::endl;

    return 0;
}
```
