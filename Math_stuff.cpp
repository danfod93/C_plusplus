#include <iostream>
// C++ Programming Tutorial 70 - Function Overloading Examples
// continued from swap.cpp

// C++ Programming Tutorial 70 - Function Overloading Examples
struct Rectangle
{
    double length;
    double width;
};

double area(double length, double width) // rectangle
{
    return length * width;
}
// C++ Programming Tutorial 70 - Function Overloading Examples
double area(double length) // square
{
    return length * length;
}
// C++ Programming Tutorial 70 - Function Overloading Examples
double area(Rectangle rectangle)
{
    return rectangle.length * rectangle.width;
}

// C++ Programming Tutorial 71 - Default Arguments
// Here we set the default value for the 2. arguent: (= 2)
double pow(double base, int pow = 2)
{
    int total = 1;
    for(int i = 0; i < pow; i++)
    {
        total *= base;
    }
    return total;
}

int main()
{
    // C++ Programming Tutorial 71 - Default Arguments
    std::cout << pow(3, 3) << std::endl;
    std::cout << pow(3) << std::endl;

    // C++ Programming Tutorial 70 - Function Overloading Examples
    // Rectangle rectangle;
    // rectangle.length = 10;
    // rectangle.width = 10;
    // std::cout << area(rectangle.length, rectangle.width) << std::endl;
    // std::cout << area(rectangle.length) << std::endl;
    // std::cout << area(rectangle) << std::endl;
    // return 0;
}
