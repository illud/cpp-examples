#include <iostream>

using namespace std;

// enum is a user-defined data type
enum Day
{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main()
{
    // declare and initialize variable
    Day today = Monday;

    // switch statement
    switch (today)
    {
    case Monday:
        cout << "Today is Monday";
        break;
    case Tuesday:
        cout << "Today is Tuesday";
        break;
    case Wednesday:
        cout << "Today is Wednesday";
        break;
    case Thursday:
        cout << "Today is Thursday";
        break;
    case Friday:
        cout << "Today is Friday";
        break;
    case Saturday:
        cout << "Today is Saturday";
        break;
    case Sunday:
        cout << "Today is Sunday";
        break;
    default:
        cout << "Error: Invalid day";
        break;
    }
}