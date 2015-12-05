// Lab 5
// Programmer: Dhanush Patel
// Editor(s) used: Xcode 7.0 beta
// Compiler(s) used: Xcode 7.0 beta

#include <iomanip>
#include <iostream>
using namespace std;

#include <cmath>

 int main()
 {
     cout << "Programmer: Dhanush Patel" << endl;
     cout << "Description: This program calculates a personal savings plan and projects future growth using user given values." << endl;
     cout << endl;
     
     // get user values
     int years;
     cout << "Number of years until retirement: ";
     cin >> years;
     
     double interestRate;
     cout << "Expected annual interest rate: ";
     cin >> interestRate;
     
     int D;
     cout << "Monthly deposit in bank savings: ";
     cin >> D;
     
     // output (calculated) values
     double p = interestRate / 1200; // 9.5% annual interest rate
     double T = years * 12;
     double S = D * ((pow(1 + p, T) - 1) / p);
     
     // echoing input values, unformatted
     cout << "In " << years << " years at " << interestRate << "%, $";
     cout << D << " deposited per month will grow to $";
     
     // formatting output (see 4.2)
     cout.setf(ios::fixed|ios::showpoint);
     cout << setprecision(2);
     cout << S << "." << endl;
 }
