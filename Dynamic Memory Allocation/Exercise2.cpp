
// 2. Dynamically Allocate an Array of Integers and Strings

int main() {
    cout << "Dynamically " << endl;
    cout << "-------------------------------------------" << endl;

    int size = 10;
    int* dynamicArray = new int[size];
    string* dynamicArrayString = new string[size];

    for (int i = 0; i < size; i++) {
        dynamicArray[i] = i;
    }

    for (int i = 0; i < size; i++) {
        cout << *(dynamicArray + i) << ' ';
    }

    cout << endl;
    for (int i = 0; i < size; i++) {
        dynamicArrayString[i] = "Element - " + std::to_string(i);
    }

    for (int i = 0; i < size; i++) {
        cout << *(dynamicArrayString + i) << '\n';
    }

    delete[] dynamicArray;
    delete[] dynamicArrayString;

    return 0;
}
