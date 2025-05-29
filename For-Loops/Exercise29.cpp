// 29. Find the LCM of Two Numbers Using HCF

#include <iostream>

using namespace std;


int main()
{
    cout << "Find the lcm of two numbers using hcf" << endl;
    cout << "-------------------------------" << endl;

    int num1, num2;

    cout << "Input 1st number for LCM: ";
    cin >> num1;
    cout << "Input 2nd number for LCM: ";
    cin >> num2;

    int lcm = 0;
    int found = 0;

    for (int i = 1; i <= num1; i++) {
        for (int j = 1; j <= num1; j++) {
            if (num2 * i == num1 * j && found == 0) {
                lcm = num2 * i;
                found = 1;
            }
        }
    }
    cout << "The LCM of " << num1 << " and " << num2 << " is: " << lcm << endl;


    return 0;
}
