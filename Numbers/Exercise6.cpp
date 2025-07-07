// 6. Deficient Number Check


bool deficient_number(int num) {
    int sum = 0;

    for ( int i = num - 1; i >= 1; i--) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum < num) {
        return true;
    }
    return false;
}




int main() {
    cout << "find abundant numbers between 1 and 1000" << endl;
    cout << "-------------------------------------------" << endl;

    cout << deficient_number(10) << endl;



    return 0;
}
