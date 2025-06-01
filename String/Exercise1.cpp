// 1. Reverse a Given String

int main()
{
    cout << "Reverse a given string" << endl;
    cout << "-------------------------------" << endl;

    string str;

    cout << "Input the string: ";
    cin >> str;

    string temp = str;

    int index = 0;

    for (int i = str.length() - 1; i >= 0; i--) {
        str[index] = temp[i];
        index++;
    }

    cout << str << endl;
    

    return 0;
}
