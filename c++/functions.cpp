#include <iostream>

// Function to add two numbers
int addNumbers(int a, int b) {
    int sum = a + b;
    return sum;
}

// Function prototype
int multiplyNumbers(int x, int y);

int main() {
    int num1 = 5, num2 = 10;
    int result = addNumbers(num1, num2); // Calling the function
    std::cout << "The sum is: " << result << '\n';

    int num3 = 3, num4 = 7;
    int result = multiplyNumbers(num3, num4); // Calling the function
    std::cout << "The product is: " << result << '\n';
  
    return 0;
}

// Function definition
int multiplyNumbers(int x, int y) {
    int product = x * y;
    return product;
}