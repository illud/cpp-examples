#include <iostream>

using namespace std;

int main()
{
    // Variable declaration
    string question = "What is your name?";
    string name;

    // Print question and get answer
    cout << question << "\n";
    // Get answer into name variable
    cin >> name;

    // Print answer
    cout << "Hello, " << name << "\n";
}