#include <iostream>
using namespace std;

// Function to add two integers
int operate(int a, int b) {
    return a + b;
}

// Function to subtract two integers
int operate(int a, int b, char op) {
    if (op == '-') {
        return a - b;
    }
    return 0; // Default case
}

// Function to multiply two integers
int operate(int a, int b, char op1, char op2) {
    if (op1 == '*' && op2 == '*') {
        return a * b;
    }
    return 0; // Default case
}

// Function to divide two integers
double operate(double a, double b) {
    if (b != 0) {
        return a / b;
    }
    return 0; // Default case for division by zero
}

int main() {
    int num1 = 10, num2 = 5;
    char op1 = '-', op2 = '*';

    cout << "Addition: " << operate(num1, num2) << endl;
    cout << "Subtraction: " << operate(num1, num2, op1) << endl;
    cout << "Multiplication: " << operate(num1, num2, op2, op2) << endl;
    cout << "Division: " << operate(static_cast<double>(num1), static_cast<double>(num2)) << endl;

    return 0;
}

