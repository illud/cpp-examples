// Source from www.w3schools.com

#include <iostream>

using namespace std;

class MyClass{ // class name
    public: // access specifier
        MyClass(){ // Constructor
            cout << "Hello World!";
        }
};

int main(){
    MyClass myObj; // Create an object of MyClass (this will call the constructor)
    return 0;
}