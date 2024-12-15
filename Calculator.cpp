#include <stdexcept>

class Calculator
{
    public:
        /**
         * Adds two numbers together and returns the result.
         * @param a First number.
         * @param b Second number.
         * @return Sum of the two numbers.
         */
        int add(int a, int b)
        {
            return a + b;
        }

        /**
         * Subtracts the second number from the first number and returns the result.
         * @param a First number.
         * @param b Second number.
         * @return Difference of the two numbers.
         */
        int subtract(int a, int b)
        {
            return a - b;
        }

        /**
         * Multiplies two numbers together and returns the result.
         * @param a First number.
         * @param b Second number.
         * @return Product of the two numbers.
         */
        int multiply(int a, int b)
        {
            return a * b;
        }

        /**
         * Divides the first number by the second number and returns the result.
         * @param a First number.
         * @param b Second number.
         * @return Quotient of the two numbers.
         * @throws std::invalid_argument if the second number is zero.
         */
        int divide(int a, int b)
        {
            if(b == 0)
            {
                throw std::invalid_argument("Division by zero!");
            }
            return a / b;
        }
};