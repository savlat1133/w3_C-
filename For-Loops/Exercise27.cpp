// 27. Display the First n Terms of the Fibonacci Series

#include <iostream>

using namespace std;


int main()
{
    cout << "Sum of the series" << endl;
    cout << "-------------------------------" << endl;

    int terms;

    cout << "Input number of terms: ";
    cin >> terms;

    int prev = 0, curr = 1;

    cout << "Here is the Fibonacci series upto 10 terms;";

    for (int i = 1; i <= terms; i++) {
        cout << prev << " ";

        int next = prev + curr;
        prev = curr;
        curr = next;
    }


    return 0;
}
