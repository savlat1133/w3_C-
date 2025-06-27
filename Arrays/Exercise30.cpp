// 30. Third Largest String in an Array

#include <iostream>
using namespace std;



int main() {
    cout << "Third largest string" << endl;
    cout << "-------------------------------------------" << endl;


    string str[] = { "abcdefgh", "abcdefg", "abcdef", "abcde", "abcd" };
    int size = sizeof(str) / sizeof(str[0]);



    sort(str, str + size);

    cout << str[2] << endl;

    return 0;
}
