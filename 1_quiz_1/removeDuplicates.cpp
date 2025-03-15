#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& number) {
    if (number.size() == 0) return 0; // If array is empty then just return 0

    int i = 0;  // Pointer to track the elements that are not repeating themselves
    for (int j = 1; j < number.size(); j++) {  
        if (number[j] != number[i]) {  // this line checks whether there is a new unrepeated element
            i++;  // Moves the index ahead after getting an unrepeated element
            number[i] = number[j];  // Copy unique value
        }
    }

    return i + 1; 
}

int main() {
    vector<int> number = {11, 11, 12, 12, 13, 14, 14, 15, 16};  // Example test case

    int newLength = removeDuplicates(number);
    cout << "New array length: " << newLength << endl;

    
    cout << "Modified array: ";
    for (int i = 0; i < newLength; i++) {
        cout << number[i] << " ";
    }
    cout << endl;

    return 0;
}