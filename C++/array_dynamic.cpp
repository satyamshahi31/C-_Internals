#include <iostream>
using namespace std;
int main() {
int n = 5;
int* arr = new int[n]; // Dynamically allocate memory
// Initializing and resizing
for (int i = 0; i < n; i++) {
arr[i] = i + 1;
}
// Resize the array
int new_size = 10;
int* new_arr = new int[new_size];
for (int i = 0; i < n; i++) {
new_arr[i] = arr[i];
}
delete[] arr; // Free old memory
arr = new_arr;
// Print new array
for (int i = 0; i < new_size; i++) {
cout << arr[i] << " ";
}
delete[] arr; // Free allocated memory
return 0;
}

/*

Advantages:
• Enables manual control of memory allocation.
• Supports resizing at runtime.
Challenges:
• Manual memory management can lead to errors, such as memory leaks or dangling
pointers.

*/