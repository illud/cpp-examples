// Source from www.w3schools.com

#include <iostream>

using namespace std;

class MyClass{ // class name
    public: // access specifier
        void myMethod(){ // Method/function defined inside the class
            cout << "Hello World!";
        }
};

int main(){
    MyClass myObj; // Create an object of MyClass
    myObj.myMethod(); // Call the method
    return 0;
}