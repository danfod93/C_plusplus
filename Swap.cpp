#include <iostream>
#include <string>
// C++ Programming Tutorial 70 - Function Overloading Examples


// C++ Programming Tutorial 79 - Creating a Function Template
template <typename T>

void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>
void swap (T a[], T b[], int size)
{
    for(int i = 0; i < size; i++)
    {
        T temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

/*
void swap(std::string &a, std::string &b)
{
    std::string temp = a;
    a = b;
    b = temp;
}
*/

int main()
{
    int a = 10;
    int b = 20;
    swap(a, b);
    std::cout << "a: " << a << "\tb: " << b << "\n";

    std::string first_name = "Caleb";
    std::string last_name = "Curry";
    swap(first_name, last_name);
    std::cout << first_name << " " << last_name << std::endl;

    // C++ Programming Tutorial 80 - Overloading Function Templates
    int const SIZE = 6;
    int nines[] = {9, 9, 9, 9, 9, 9};
    int ones[] = {1, 1, 1, 1, 1, 1};

    for(int i = 0; i < 6; i++)
    {
        std::cout << nines[i] << " " << ones[i] << "\t";
    }

    std::cout << "\n\n";
    // C++ Programming Tutorial 80 - Overloading Function Templates
    swap(nines, ones, SIZE);
    
    // C++ Programming Tutorial 80 - Overloading Function Templates
    for(int i = 0; i < 6; i++)
    {
        std::cout << nines[i] << " " << ones[i] << "\t";
    }

    std::cout << "\n\n";

    return 0;
}

// continued in math_stuff.cpp