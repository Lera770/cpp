#include <iostream>
using namespace std;

int main() {
    double temp;
    char scale;
    
    cout << "Enter temperature: ";
    cin >> temp;
    cout << "Is this Celsius (C) or Fahrenheit (F)? ";
    cin >> scale;
    
    if (scale == 'C',  scale == 'c') {
        double f = (temp * 9/5) + 32;
        cout << temp << "°C = " << f << "°F" << endl;
    }
    else if (scale == 'F',  scale == 'f') {
        double c = (temp - 32) * 5/9;
        cout << temp << "°F = " << c << "°C" << endl;
    }
    else {
        cout << "Error! Please enter C or F" << endl;
    }
    
    return 0;
}
