#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    double height;
    
    // Input data
    cout << "Enter your name: ";
    getline(cin, name);
    
    cout << "Enter your age: ";
    cin >> age;
    
    cout << "Enter your height (in cm): ";
    cin >> height;
    
    // Output in specified format
    cout << "Hello, my name is " << name << ". ";
    cout << "I am " << age << " years old, ";
    cout << "my height is " << height << " cm." << endl;
    
    return 0;
}
