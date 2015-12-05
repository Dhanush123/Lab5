// Lab 5
// Programmer: Dhanush Patel
// Editor(s) used: Xcode 7.0 beta
// Compiler(s) used: Xcode 7.0 beta

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    cout << "Programmer: Dhanush Patel" << endl;
    cout << "Description: This program converts a user given Celsius temperature to a Fahrenheit one." << endl;
    cout << endl;
    
    double celsiusTemperature;
    cout << "What's the temperature in Celsius? ";
    cin >> celsiusTemperature;
    
    double fahrenheitTemperature = ((9.0/5) * celsiusTemperature) + 32;
    
    cout << celsiusTemperature << " Celsius equals ";
    cout.setf( ios:: fixed | ios:: showpoint);
    cout << setprecision(1);
    cout << fahrenheitTemperature << " Fahrenheit" << endl;
}
