/*

Encapsulation means bundling data and functions together and 
restricting direct access to that data. 
In C++ this is achieved via private, protected, and public access specifiers.

*/




#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int age;

public:
    // "Setter" with validation
    void setName(const string& n) {
        if (!n.empty()) {
            name = n;
        }
    }

    void setAge(int a) {
        if (a > 0 && a < 150) { // simple validation
            age = a;
        }
    }

    // "Getter" functions to read state
    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    void print() const {
        std::cout << name << " is " << age << " years old\n";
    }
};

int main() {
    Student s;
    s.setName("Satyam");
    s.setAge(21);
    s.print();

    // s.age = -10;      // Error: 'age' is private, cannot be accessed directly
    // s.name = "xxx";   // Error: 'name' is private

    return 0;
}
