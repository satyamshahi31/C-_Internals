#include <iostream>
using namespace std;
int main() {
int arr[5] = {1, 2, 3, 4, 5}; // Declaration and initialization
// Accessing and modifying elements
arr[2] = 10;
for (int i = 0; i < 5; i++) {
cout << arr[i] << " ";
}
return 0;
}

/*

Advantages of Arrays:
• Fast access using indices.
• Efficient for operations where the size of the data set is known beforehand.
• Compact and straightforward implementation.
Limitations of Static Arrays:
• Fixed size, leading to potential wastage of memory or insufficient storage.
• Insertion and deletion operations are inefficient as they require shifting elements.


*/