#include <iostream>
using namespace std;

int main() {
    double subject1, subject2, subject3, subject4, subject5;
    double average;
    
    cout << "Enter grade for subject 1: ";
    cin >> subject1;
    cout << "Enter grade for subject 2: ";
    cin >> subject2;
    cout << "Enter grade for subject 3: ";
    cin >> subject3;
    cout << "Enter grade for subject 4: ";
    cin >> subject4;
    cout << "Enter grade for subject 5: ";
    cin >> subject5;
    
    average = (subject1 + subject2 + subject3 + subject4 + subject5) / 5;
    
    cout << "Average grade: " << average << endl;
    
    return 0;
}
