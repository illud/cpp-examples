#include <iostream>
#include <string> // std::string, std::stoi

using namespace std;

int main(){
    // Variable declaration (string to int)
    string age = "28";
    // Convert string to int
    int ageInt = stoi(age);
    // Print age
    cout << ageInt << "\n";

    // Variable declaration (int to string)
    int age2Int = 28;
    // Convert int to string
    string age2 = to_string(age2Int);
    // Print age
    cout << age2 << "\n";
}