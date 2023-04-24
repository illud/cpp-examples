#include <iostream>

using namespace std;

int main()
{
    // Array declaration
    int array[] = {1, 2, 3, 4, 5};

    // Print the first element of the array
    cout << array[0] << "\n";

    // Print the second element of the array
    cout << array[1] << "\n";

    // Print size of array
    cout << sizeof(array) / sizeof(int) << "\n";

    // Print all elements of the array
    for (int i = 0; i < sizeof(array) / sizeof(int); i++)
    {
        cout << array[i] << "\n";
    }
}