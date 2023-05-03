#include <iostream>

using namespace std;

// template is a user-defined data type
template <typename T>
T Operation(T x, T y)
{
    return x + y;
}

int main()
{
    cout << Operation<int>(1, 2) << "\n";
    cout << Operation<float>(1.4, 4.5) << "\n";
}