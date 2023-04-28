#include <iostream>

using namespace std;

int main()
{
    // Declare variables
    int age = 28;

    // Check if age is greater than or equal to 18
    // in a ternary operator
    bool canIVote = (age >= 18) ? true : false;

    // Set cout to print bools as true/false
    cout.setf(ios::boolalpha);

    // Print the result
    cout << "Can i vote? " << canIVote << "\n";
}