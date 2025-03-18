// Current Date and Time Display


#include <iostream>

using namespace std;

int main() {
    cout << "Display the Current Date and Time :" << endl;
    cout << "----------------------------------------------" << endl;

    time_t now = time(NULL);
    tm* tPtr = localtime(&now);

    // Outputting different components of the current date and time
    cout << " seconds = " << (tPtr->tm_sec) << endl; // Displaying seconds
    cout << " minutes = " << (tPtr->tm_min) << endl; // Displaying minutes
    cout << " hours = " << (tPtr->tm_hour) << endl; // Displaying hours
    cout << " day of month = " << (tPtr->tm_mday) << endl; // Displaying day of the month
    cout << " month of year = " << (tPtr->tm_mon)+1 << endl; // Displaying month of the year
    cout << " year = " << (tPtr->tm_year)+1900 << endl; // Displaying year
    cout << " weekday = " << (tPtr->tm_wday) << endl; // Displaying weekday
    cout << " day of year = " << (tPtr->tm_yday) << endl; // Displaying day of the year
    cout << " daylight savings = " << (tPtr->tm_isdst) << endl; // Displaying daylight savings

    cout << endl; // Outputting empty lines for formatting

    // Displaying current date and time in a formatted manner
    cout << " Current Date: " <<(tPtr->tm_mday)<<"/"<< (tPtr->tm_mon)+1 <<"/"<< (tPtr->tm_year)+1900<< endl; // Displaying the current date
    cout << " Current Time: " << (tPtr->tm_hour)<<":"<< (tPtr->tm_min)<<":"<< (tPtr->tm_sec) << endl; // Displaying the current time

    cout << endl; // Outputting empty line for formatting


    return 0;
