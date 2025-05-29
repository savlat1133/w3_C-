// 28. Sum of Integers Between 100 and 200 Divisible by 9
#include <iostream>

using namespace std;


int main()
{
    cout << "Sum of integers between 100 and 200" << endl;
    cout << "-------------------------------" << endl;

    cout << "Numbers between 100 and 200, divisible by 9: " << endl;
    int sum = 0;

    for (int i = 100; i <= 200; i++) {
        if (i % 9 == 0) {
            cout << i << " ";
            sum += i;
        }
    }
    cout << endl;

    cout << "The sum : " << sum << endl;


    return 0;
}
