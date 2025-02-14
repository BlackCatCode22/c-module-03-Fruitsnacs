// Double int project cit-66
// Alex Lopez
// 2/11/2025

#include <iostream>

using namespace std;

int main() {
    // Create an array of integers with 5 elements
    int arr[5] = { 10, 20, 30, 40, 50 };
    int* ptr = arr; // Pointer to the first element of the array

    // Print addresses and values using pointer arithmetic
    for (int i = 0; i < 5; ++i) {
        cout << "Address of arr[" << i << "]: " << (ptr + i) << endl;
        cout << "Value of arr[" << i << "]: " << *(ptr + i) << endl;
    }

    return 0;
}
