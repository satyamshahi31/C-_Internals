/*
Copy constructor creates a new object as a deep or shallow copy of an existing object,
 invoked during initialization like Class obj2 = obj1 or passing by value. 
 Signature: ClassName(const ClassName& other); parameter is const reference to avoid slicing and infinite recursion.
  Compiler generates a default member-wise copy, but define custom for pointers/resources to avoid shallow copy bugs.


*/



#include <iostream>
#include <cstring>

class MyString {
private:
    char* data;  // Dynamic resource needing deep copy

public:
    // Regular constructor
    MyString(const char* str) {
        data = new char[strlen(str) + 1];
        strcpy(data, str);
        std::cout << "Regular ctor: " << data << '\n';
    }

    // Copy constructor: deep copy
    MyString(const MyString& other) {
        data = new char[strlen(other.data) + 1];  // Allocate new memory
        strcpy(data, other.data);                 // Copy content
        std::cout << "Copy ctor: " << data << '\n';
    }

    ~MyString() {
        std::cout << "Dtor: " << data << '\n';
        delete[] data;
    }

    void print() const { std::cout << "Content: " << data << '\n'; }
};

int main() {
    MyString s1("Hello");     // Regular ctor
    MyString s2 = s1;         // Copy ctor invoked
    s2.print();
    return 0;                 // Dtors: s2 then s1
}


