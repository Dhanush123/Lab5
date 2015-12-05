// Lab 5
// Programmer: Dhanush Patel
// Editor(s) used: Xcode 7.0 beta
// Compiler(s) used: Xcode 7.0 beta

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Programmer: Dhanush Patel" << endl;
    cout << "Description: This program displays user given values of" << endl;
    cout << "a person's age, name, outside temperature, and city currently present in." << endl;
    cout << endl;
    
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cin.ignore(1000, 10);
    
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    
    double temperature;
    cout << "Enter the temperature outside right now (degrees F): ";
    cin >> temperature;
    cin.ignore(1000, 10);
    
    string city;
    cout << "What city are you in right now? ";
    getline(cin, city);
    
    cout << endl;
    
    cout << name << " is " << age << " years old." << endl;
    cout << "It's " << temperature << " degreees F in " << city << "." << endl;
}
