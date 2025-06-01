// 61. Print ASCII Characters with Their Values


#include <iostream>

using namespace std;

int main()
{
    cout << "Print ASCII characters with their values" << endl;
    cout << "-------------------------------" << endl;

    int startValue, endValue;

    cout << "Input the starting value for ASCII characters: ";
    cin >> startValue;
    cout << "Input the ending value for ASCII characters: ";
    cin >> endValue;

    for (int i = startValue; i <= endValue; i++) {
        char ch = i;
        cout << i << " --> " << ch << endl;
    }
    
    return 0;
}
