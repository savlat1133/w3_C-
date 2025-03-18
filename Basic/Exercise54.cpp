
// Simple Interest Calculation

#include <iostream>

using namespace std;



int main() {
    int p, r, t, i; // Declaring variables to store principle, rate, time, and interest

    cout << "\n\n Calculate the Simple Interest :\n"; // Displaying the purpose of the program
    cout << " -----------------------------------\n";

    cout << " Input the Principle: "; // Prompting the user to input the principle amount
    cin >> p; // Taking input of the principle amount from the user

    cout << " Input the Rate of Interest: "; // Prompting the user to input the rate of interest
    cin >> r; // Taking input of the rate of interest from the user

    cout << " Input the Time: "; // Prompting the user to input the time period
    cin >> t; // Taking input of the time period from the user

    i = (p * r * t) / 100; // Calculating the simple interest using the formula: PRT / 100

    cout << " The Simple interest for the amount " << p << " for " << t << " years @ " << r << " % is: " << i; // Displaying the calculated simple interest

    cout << endl;
    return 0;
}
