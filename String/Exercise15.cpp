// 15. Convert a Non-Negative Integer to English Words
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string numberToWords(int num) {
        if (num == 0) return "Zero";
        
        string result;
        int group = 0;  // 0 → "", 1 → "Thousand", 2 → "Million", 3 → "Billion"
        
        while (num > 0) {
            int chunk = num % 1000;
            if (chunk != 0) {
                result = helper(chunk) + thousands[group] + (result.empty() ? "" : " " + result);
            }
            num /= 1000;
            ++group;
        }
        
        return result;
    }
    
private:
    // Words for 1–19
    const vector<string> below20 = {
        "", "One", "Two", "Three", "Four", "Five", "Six", "Seven",
        "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen",
        "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"
    };
    // Words for multiples of ten from 20 to 90
    const vector<string> tens = {
        "", "", "Twenty", "Thirty", "Forty", "Fifty",
        "Sixty", "Seventy", "Eighty", "Ninety"
    };
    // Scale names
    const vector<string> thousands = {
        "", "Thousand", "Million", "Billion"
    };
    
    // Convert a number in [1..999] into words, with a trailing space
    string helper(int num) {
        if (num == 0) {
            return "";
        } else if (num < 20) {
            return below20[num] + " ";
        } else if (num < 100) {
            return tens[num / 10] + " " + helper(num % 10);
        } else {
            return below20[num / 100] + " Hundred " + helper(num % 100);
        }
    }
};

int main() {
    Solution sol;
    cout << "Convert a non-negative integer to English words\n"
         << "------------------------------------------------\n";
    cout << "Enter an integer: ";
    
    int n;
    if (!(cin >> n) || n < 0) {
        cerr << "Please enter a valid non-negative integer.\n";
        return 1;
    }
    
    cout << sol.numberToWords(n) << "\n";
    return 0;
}
