#include <iostream>
#include <cmath> 

double addition(double a, double b);
double subtraction(double a, double b);
double multiplication(double a, double b);
double division(double a, double b);
double squareRoot(double number);
double power(double base, double exponent);
double sine(double angle);
double cosine(double angle);

int main()
{
    int choice;

    std::cout << "====================================\n";
    std::cout << "        SCIENTIFIC CALCULATOR \n";
    std::cout << "====================================\n";
    std::cout << "[1] Addition\n";
    std::cout << "[2] Subtraction\n";
    std::cout << "[3] Multiplication\n";
    std::cout << "[4] Division\n";
    std::cout << "[5] Square Root\n";
    std::cout << "[6] Power\n";
    std::cout << "[7] Sine\n";
    std::cout << "[8] Cosine\n";

    // USER INPUT
    std::cout << "Enter the function you want to perform: ";
    std::cin >> choice;

switch(choice)
{
    case 1:
    {
        double num1, num2;

        std::cout << "Enter first number: ";
        std::cin >> num1;

        std::cout << "Enter second number: ";
        std::cin >> num2;

        std::cout << "Answer: " << addition(num1, num2) << '\n';
        break;
    }

    case 2:
    {
        double num1, num2;

        std::cout << "Enter first number: ";
        std::cin >> num1;

        std::cout << "Enter second number: ";
        std::cin >> num2;

        std::cout << "Answer: " << subtraction(num1, num2) << '\n';
        break;
    }

    case 3:
    {
        double num1, num2;

        std::cout << "Enter first number: ";
        std::cin >> num1;

        std::cout << "Enter second number: ";
        std::cin >> num2;

        std::cout << "Answer: " << multiplication(num1, num2) << '\n';
        break;
    }

    case 4:
    {
        double num1, num2;

        std::cout << "Enter first number: ";
        std::cin >> num1;

        std::cout << "Enter second number: ";
        std::cin >> num2;

        std::cout << "Answer: " << division(num1, num2) << '\n';
        break;
    }

    case 5:
    {
        double number;

        std::cout << "Enter a number: ";
        std::cin >> number;

        std::cout << "Answer: " << squareRoot(number) << '\n';
        break;
    }

    case 6:
    {
        double base, exponent;

        std::cout << "Enter the base: ";
        std::cin >> base;

        std::cout << "Enter the exponent: ";
        std::cin >> exponent;

        std::cout << "Answer: " << power(base, exponent) << '\n';
        break;
    }

    case 7:
    {
        double angle;

        std::cout << "Enter the angle in degrees: ";
        std::cin >> angle;

        std::cout << "Answer: " << sine(angle) << '\n';
        break;
    }

    case 8:
    {
        double angle;

        std::cout << "Enter the angle in degrees: ";
        std::cin >> angle;

        std::cout << "Answer: " << cosine(angle) << '\n';
        break;
    }

    default:
        std::cout << "Invalid. Try again." << '\n';
}

    return 0;
}

double addition(double a, double b)
{
    return a + b;
}

double subtraction(double a, double b)
{
    return a - b;
}

double multiplication(double a, double b)
{
    return a * b;
}

double division(double a, double b)
{
    if (b == 0) // Check if the divisor is zero to prevent division by zero. 
    {
        std::cout << "Error! Cannot divide by zero.\n";
        return 0;
    }

    return a / b;
}

double squareRoot(double number)
{
    if(number < 0) // Checks for negative numbers.
    {
        std::cout << "Error! Cannot find the square root of a negative number.\n";
        return 0;
    }

    return sqrt(number);
}

double power(double base, double exponent)
{
    return pow(base, exponent);
}

double sine(double angle)
{
    const double PI = 3.14;
    angle = angle * PI / 180.0; // Convert degrees to radians before calculating sine.

    return sin(angle);
}

double cosine(double angle)
{
    const double PI = 3.14;
    angle = angle * PI / 180.0; // Convert degrees to radians before calculating cosine.

    return cos(angle);
}