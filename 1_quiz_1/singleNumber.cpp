#include <iostream>
#include <vector>

using namespace std;

int singleNumbercheck(vector<int>& number) {
    for (int i = 0; i < number.size(); i++) {
        int count = 0;  // Count appearance  of specific numbers

        // Loop through array to check how many times specific numbers appears
        for (int j = 0; j < number.size(); j++) {
            if (number[i] == number[j]) {
                count++;
            }
        }

        // If count is 1, it's the unique number(No other like it)
        if (count == 1) {
            return number[i];
        }
    }

    return 0;
}

int main() {
    vector<int> number = {11, 12, 13, 12, 11, 15, 13};  // Example test case array

    int singleNum = singleNumbercheck(number);
    cout << "The unique number is: " << singleNum << endl;

    return 0;
}