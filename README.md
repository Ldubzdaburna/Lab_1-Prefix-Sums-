# Lab_1-Prefix-Sums-

# README

## Overview

This project contains a C++ program that defines two functions designed to process arrays of integers. It also includes unit tests for these functions using the Doctest framework. The functions check specific conditions related to prefix sums:

1. **`non_neg_prefix_sum`**: This function checks whether all prefix sums of the list are non-negative.
2. **`non_pos_prefix_sum`**: This function checks whether all prefix sums of the list are non-positive.

## Files

- **`lab_1.cpp`**: Contains the main function, which runs a few test cases to demonstrate the functionality of the two prefix sum functions.
- **`testLab1.cpp`**: Contains the unit tests for both functions using the Doctest framework to verify their correctness.
- **`include/doctest.h`**: The header file for the Doctest framework, which should be included in your project.

## Requirements

- The Doctest framework header file (`doctest.h`) must be downloaded and placed in an `include` directory within your project.

## Compilation and Execution

To compile and run the main program (which simply demonstrates the functionality), use the following commands:

```bash
g++ -o lab1 lab_1.cpp
./lab1
```

To compile and run the unit tests, use the following commands:

```bash
g++ -o test testLab1.cpp
./test
```

## Functionality

### `non_neg_prefix_sum` Function

- **Description**: Checks if the prefix sum of the input array never goes below zero.
- **Parameters**:
  - `list`: An array of integers.
  - `length`: The number of elements in the array.
- **Returns**: `true` if the prefix sum does't go below zero and  `false` otherwise.

### `non_pos_prefix_sum` Function

- **Description**: Checks if the prefix sum of the input array never goes above zero.
- **Parameters**:
  - `list`: An array of integers.
  - `length`: The number of elements in the array.
- **Returns**: `true` if the prefix sum doesn't go above zero, `false` otherwise.

## Testing

The unit tests make use of the Doctest framework. The file `tests.cpp` includes several test cases for the two functions to ensure they behave as expected for various input scenarios.
