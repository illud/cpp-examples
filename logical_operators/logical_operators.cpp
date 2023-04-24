#include <iostream>

using namespace std;

int main()
{
    // Variable declaration
    bool isTrue = true;
    bool isFalse = false;

    // Print logical operators
    cout << (isTrue && isFalse) << "\n"; // AND
    cout << (isTrue || isFalse) << "\n"; // OR
    cout << (!isTrue) << "\n";           // NOT
    cout << (isTrue != isFalse) << "\n"; // XOR
    cout << (isTrue == isFalse) << "\n"; // EQUAL
    cout << (isTrue != isFalse) << "\n"; // NOT EQUAL
    cout << (isTrue > isFalse) << "\n";  // GREATER THAN
    cout << (isTrue < isFalse) << "\n";  // LESS THAN
    cout << (isTrue >= isFalse) << "\n"; // GREATER THAN OR EQUAL
    cout << (isTrue <= isFalse) << "\n"; // LESS THAN OR EQUAL
}