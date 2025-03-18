// Compound Interest Calculation


#include <iostream>

using namespace std;

int main() {
    cout << "Calculate the Compound Interest : " << endl;
    cout << "------------------------------------" << endl;
    float r, t, p, ci, cp;

    cout << " Input the Principle: "; // Prompting the user to input the principle amount
    cin >> p;

    cout << " Input the Rate of Interest: "; // Prompting the user to input the rate of interest
    cin >> r;

    cout << " Input the Time: "; // Prompting the user to input the time period
    cin >> t;

    ci = p * pow((1 + r / 100), t) - p;
    cp = p * pow((1 + r / 100), t);

    cout << " The Interest after compounded for the amount " << p << " for " << t << " years @ " << r << " % is: " << ci << endl;
    cout << " The total amount after compounded for the amount " << p << " for " << t << " years @ " << r << " % is: " << cp << endl;

    return 0;
}
