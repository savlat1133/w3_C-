// 34. Find the Length of a String Without Using Library Functions

#include <iostream>

using namespace std;

bool prime(int n);
int length;
int main()
{
    cout << "Find the length of a string without using library functions" << endl;
    cout << "-------------------------------" << endl;


    string str;

    cout << "Input a string: ";
    cin >> str;

    for (char i : str) {
        length++;
    }

    cout << "The string contains " << length << " number of characters." << endl;
    cout << "So, the length of the string " << str << " is " << length << endl;



    return 0;
}
