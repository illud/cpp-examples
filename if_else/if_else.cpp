#include <iostream>

using namespace std;

int main()
{
    // Declare and initialize variable
    int age = 64;

    // if statement
    if (age < 18)
    {
        cout << "You are a minor";
    }
    else if (age >= 18 && age < 65)
    {
        cout << "You are an adult";
    }
    else
    {
        cout << "You are a senior";
    }
}