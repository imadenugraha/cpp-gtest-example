#include "../Calculator.cpp"
#include <gtest/gtest.h>

// Tests the addition functionality of the Calculator class.
// Verifies that adding two positive numbers returns the correct sum,
// and that adding a negative and a positive number returns zero.
TEST(CalculatorTest, Addition)
{
    Calculator calc;
    EXPECT_EQ(calc.add(3,2), 5);
    EXPECT_EQ(calc.add(-1, 1), 0);
}

// Tests the subtraction functionality of the Calculator class.
// Verifies that subtracting two positive numbers returns the correct
// difference, and that subtracting a negative and a positive number
// returns the correct negated difference.
TEST(CalculatorTest, Subtraction)
{
    Calculator calc;
    EXPECT_EQ(calc.subtract(5, 3), 2);
    EXPECT_EQ(calc.subtract(3, 5), -2);
}

// Tests the multiplication functionality of the Calculator class.
// Verifies that multiplying two positive numbers returns the correct product,
// and that multiplying a positive and a negative number returns the correct negative product.

TEST(CalculatorTest, Multiplication)
{
    Calculator calc;
    EXPECT_EQ(calc.multiply(3, 4), 12);
    EXPECT_EQ(calc.multiply(5, -1), -5);
}

// Tests the division functionality of the Calculator class.
// Verifies that dividing two positive numbers returns the correct quotient.
TEST(CalculatorTest, Division)
{
    Calculator calc;
    EXPECT_EQ(calc.divide(10, 2), 5);
    EXPECT_EQ(calc.divide(6, 3), 2);
}

// Tests that attempting to divide by zero throws an std::invalid_argument exception.
TEST(CalculatorTest, DivisionByZero)
{
    Calculator calc;
    EXPECT_THROW(calc.divide(1, 0), std::invalid_argument);
}
