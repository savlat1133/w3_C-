// 3. Display n Terms of Natural Numbers and Their Sum

#include <iostream>

using namespace std;

int main()
{
    cout << "First 10 Natural Numbers" << endl;
    cout << "-------------------------------" << endl;

    int num;
    int sum = 0;

    cout << "Input a number of terms: ";
    cin >> num;

    cout << "The natural numbers upto " << num << "th terms are:" << endl;

    for (int i = 1; i <= num; i++) {
        cout << i << " ";
        sum += i;
    }
    cout << endl;

    cout << "The sum of natural numbers is: " << sum << endl;

    return 0;
}
