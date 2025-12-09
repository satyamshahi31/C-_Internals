#include <iostream>
#include <vector>
using namespace std;
int main() {
vector<int> vec = {1, 2, 3, 4, 5};
// Add elements dynamically
vec.push_back(6);
vec.push_back(7);
// Access and modify elements

vec[2] = 10;
// Print elements
for (int i = 0; i < vec.size(); i++) {
cout << vec[i] << " ";
}
return 0;
}

/*
Advantages of std::vector:
• Automatic memory management and resizing.
• Extensive functionality, including insertion, deletion, and iteration.
• Seamless integration with other STL algorithms.

*/