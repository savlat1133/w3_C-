// Write a C++ program to print the results of the specified operations.

#include <iostream>

using namespace std;

int main() {
    cout << "\n\n Print the result of some specific operation :\n";
    cout << "--------------------------------------------------\n"; 
    
    cout << " Result of 1st expression is : "<< (-1+4*6) <<"\n" ; // Calculation: -1 + (4*6) = -1 + 24 = 23
    cout << " Result of 2nd expression is : "<< ((35+5)%7) <<"\n" ; // Calculation: (35+5) % 7 = 40 % 7 = 5 (remainder of 40/7)
    cout << " Result of 3rd expression is : "<< (14+-4*6/11) <<"\n" ; // Calculation: 14 - (4*6)/11 = 14 - 24/11 = 14 - 2 = 12
    cout << " Result of 4th expression is : "<< (2+15/6*1-7%2) <<"\n\n" ; // Calculation: 2 + (15/6)*1 - (7%2) = 2 + 2 - 1 = 4 - 1 = 3
    

    return 0;
}
