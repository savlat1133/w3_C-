// 72. Decimal to Octal Conversion

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Decimal to octal conversion" << endl;
    cout << "-------------------------------" << endl;


    int decimal;

    cout << "Enter a decimal number: ";
    cin >> decimal;

    string octa = "";

    while (decimal != 0) {
        int remainder = decimal % 8;
        octa += to_string(remainder);
        decimal /= 8;
    }

    reverse(octa.begin(), octa.end());

    cout << "The octal number is : " << octa << endl;

    return 0;
}
