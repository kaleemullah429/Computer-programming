// Lab 3 Task 1.cpp
// Name: [Kaleem Ullah]
// Registration Number: [BF25NWELE0661]

   // Logical Operators Program
#include <iostream>
using namespace std;

float main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num > 0 && num < 100) { // checks if num is greater than 0 AND less than 100 

        cout << "The number meets both conditions (0 < num < 100)." << endl; 
    } else {
        cout << "The number does not meet both conditions." << endl; 
    }
    return 0;
}


