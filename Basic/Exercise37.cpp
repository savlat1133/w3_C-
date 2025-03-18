// Print Mystery Series 1 to 50

#include <iostream>

using namespace std;

int main() {
    cout << "Print Mystery Series 1 to 50: " << endl;
    cout << "----------------------------------------------" << endl;

    int nm1 = 1; // Initializing variable nm1 to 1

    while (true) // Starting an infinite loop
    {
        ++nm1; // Incrementing nm1 by 1 in each iteration

        if ((nm1 % 3) == 0) // Checking if nm1 is divisible by 3
            continue; // Skipping further execution of the loop if nm1 is divisible by 3

        if (nm1 == 50) // Checking if nm1 is equal to 50
            break; // Exiting the loop if nm1 is equal to 50

        if ((nm1 % 2) == 0) // Checking if nm1 is even
        {
            nm1 += 3; // Adding 3 to nm1 if it's even
        }
        else
        {
            nm1 -= 3; // Subtracting 3 from nm1 if it's odd
        }

        cout << nm1 << " "; // Outputting the current value of nm1 followed by a space
    }

    cout << endl; // Adding a new line after printing the series
    return 0;
}
