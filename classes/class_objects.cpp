// Source from www.w3schools.com

#include <iostream>

using namespace std;

class MyClass{ // class name
    public: // access specifier
        int myNum; // attribute (int variable)
        string myString; // attribute (string variable)
};

int main(){
    MyClass myObj; // Create an object of MyClass

    myObj.myNum = 15; // access attributes and set values
    myObj.myString = "Some text"; // access attributes and set values

    cout << myObj.myNum << "\n"; // access attributes and print values
    cout << myObj.myString << "\n"; // access attributes and print values

    return 0;
}