#include <iostream>
#include <vector>
#include <set>  

using namespace std;

bool checkDuplicates(vector<int>& arr) {  
    set<int> checked;  
    
    for (int i = 0; i < arr.size(); i++) {  //For loop into the array
        if (checked.find(arr[i]) != checked.end()) { // find duplicate!!!
            return true;
        }
        checked.insert(arr[i]); // Store the value
    }

    return false; //False if no duplicate found
}

int main() {
    vector<int> arr1 = {11, 12, 13, 14, 15, 16, 17};  // Example test case with no duplicates
    vector<int> arr2 = {11, 12, 13, 14, 15, 11, 16};  // Example tyest case  duplicates

   
    if (checkDuplicates(arr1)) {
        cout << "First TestCase: Has duplicates" << endl;
    } else {
        cout << "First TestCase : Has No duplicates" << endl;
    }

    if (checkDuplicates(arr2)) {
        cout << "Second TestCase: Has duplicates" << endl;
    } else {
        cout << "Second TestCase: Has No duplicates" << endl;
    }

    return 0;
}