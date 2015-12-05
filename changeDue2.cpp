// Lab 5
// Programmer: Dhanush Patel
// Editor(s) used: Xcode 7.0 beta
// Compiler(s) used: Xcode 7.0 beta

#include <iostream>

using namespace std;

int main()
{
    cout << "Programmer: Dhanush Patel" << endl;
    cout << "Description: This program calculates the change due for user given values of cash payment and tendered amount." << endl;
    cout << endl;
    
    int cashPayment;
    cout << "Cash payment amount: ";
    cin >> cashPayment;
    cin.ignore(1000, 10);
    
    int amountTendered;
    cout << "Tendered amount: ";
    cin >> amountTendered;
    cin.ignore(1000, 10);
    
    int changeDue = amountTendered - cashPayment;
    
    cout << "Change due: " << changeDue << endl;
    
    //do all the change calculations
    int hundredThousands = changeDue / 100000;
    changeDue = changeDue % 100000;
    
    int tenThousands = changeDue / 10000;
    changeDue = changeDue % 10000;
    
    int fiveThousands = changeDue / 5000;
    changeDue = changeDue % 5000;
    
    int thousands = changeDue / 1000;
    changeDue = changeDue % 1000;
    
    int fiveHundreds = changeDue / 500;
    changeDue = changeDue % 500;
    
    int hundreds = changeDue / 100;
    changeDue = changeDue % 100;
    
    int fifties = changeDue / 50;
    changeDue = changeDue % 50;
    
    int twenties = changeDue / 20;
    changeDue = changeDue % 20;
    
    int tens = changeDue / 10;
    changeDue = changeDue % 10;
    
    int fives = changeDue / 5;
    changeDue = changeDue % 5;
    
    int twos = changeDue / 2;
    changeDue = changeDue % 2;
    
    int ones = changeDue / 1;
    changeDue = changeDue % 1;
    
    cout << "" << endl;
    cout << "Change paid out in:" << endl;
    cout << " this many hundred thousand dollar bills: " << hundredThousands << endl;
    cout << " this many ten thousand dollar bills: " << tenThousands << endl;
    cout << " this many five thousand dollar bills: " << fiveThousands << endl;
    cout << " this many thousand dollar bills: " << thousands << endl;
    cout << " this many five hundred dollar bills: " << fiveHundreds << endl;
    cout << " this many hundred dollar bills: " << hundreds << endl;
    cout << " this many fifty dollar bills: " << fifties << endl;
    cout << " this many twenty dollar bills: " << twenties << endl;
    cout << " this many ten dollar bills: " << tens << endl;
    cout << " this many five dollar bills: " << fives << endl;
    cout << " this many two dollar bills: " << twos << endl;
    cout << " this many one dollar bills: " << ones << endl;
}