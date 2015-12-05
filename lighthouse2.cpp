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
     cout << "Description: This program calculates from what distance away can a boat see a lighthouse of a certain height." << endl;
     cout << endl;
     
     //get user input
     double lighthouseHeight;
     cout << "What's the amount borrowed? ";
     cin >> lighthouseHeight;
     cin.ignore(1000, 10);
     
     //calculate distance
     double lighthouseToBoatDistance = sqrt(0.8 * lighthouseHeight);
 
     //show the distance between the lighthouse and the boat
     cout << "A " << lighthouseHeight << " foot tall lighthouse can be see from ";
     cout.setf(ios::fixed);
     cout << setprecision(0);
     cout << lighthouseToBoatDistance << " miles away" << endl;
 }

