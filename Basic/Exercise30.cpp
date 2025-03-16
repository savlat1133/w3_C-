 // Total and Average of Four Numbers


#include <iostream>

using namespace std;

int main() {
    cout << "Compute the total and average of four numbers :" << endl;
    cout << "----------------------------------------------" << endl;

    int n1, n2, n3, n4;
    float avg;

    cout << "Input the 1st numbers (separated by space) : ";
    cin >> n1 >> n2;
    cout << "Input last two numbers (separated by space) : ";
    cin >> n3 >> n4;

    avg = (n1 + n2 + n3 + n4) / 4.0;

    cout << "The average of four numbers is " << avg << endl;

    return 0;
}
