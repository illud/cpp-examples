#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Vector declaration
    vector<int> vector = {1, 2, 3, 4, 5};

    // Print the first element of the vector
    cout << vector[0] << "\n";

    // Print size of vector
    cout << vector.size() << "\n";

    // Push a new element to vector
    vector.push_back(6);

    // Print size of vector
    cout << vector.size() << "\n";
}