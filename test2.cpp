#include <iostream>


// Function declaration
double add(double a, double b);


// Main function
int main()
{
    double x = 1.2;
    double y = 3.4;

    double sum = add(x, y);

    std::cout << "The sum is " << sum << std::endl;

    return 0;
}


// The function definition
double add(double a, double b)
{
    return a + b;
}
