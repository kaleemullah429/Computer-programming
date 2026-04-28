// Lab Task 3: Sum of Numbers from 1 to N Using for Loop
// Name: Kaleem Ullah
// Registration No: BF25NWELE0661

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += i; // Add each value to the running total
    }

    cout << "Sum from 1 to " << n << " = " << sum << endl;
    return 0;
}
