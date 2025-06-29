// 1. Dynamically Allocate Basic Types

#include <iostream>
#include <string>
using namespace std;



int main() {
    cout << "Dynamically allocate basic types" << endl;
    cout << "-------------------------------------------" << endl;

    int* integer = new int;
    *integer = 12345;

    char* character = new char;
    *character = 'a';

    string* str = new string;
    *str = "hello world";


    cout << *integer << endl;
    cout << *character << endl;
    cout << *str << endl;

    delete integer;
    delete character;
    delete str;
    
    return 0;
}
