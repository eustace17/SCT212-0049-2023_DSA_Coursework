#include <iostream>
#include <vector>

using namespace std;


void rotateArray(vector<int>& number, int k) {
    int n = number.size();
    if (n == 0) return; 

    vector<int> temp(n);  // Create a temp array 

    
    for (int i = 0; i < k; i++) {
        temp[i] = number[n - k + i]; 
    }

    
    for (int i = 0; i < n - k; i++) {
        temp[k + i] = number[i];
    }

    
    for (int i = 0; i < n; i++) {
        number[i] = temp[i];
    }
}

int main() {
    vector<int> number = {11, 12, 13, 14, 15, 16, 17};  // Example test case
    int k = 3;  // Rotate it  by 3 steps innitialization

    rotateArray(number, k);

    
    cout << "Rotated array: ";
    for (int num : number) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}