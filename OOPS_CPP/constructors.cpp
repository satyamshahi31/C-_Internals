/*


Constructors initialize an object when it is created; destructors clean up when it is destroyed. 
C++ supports default constructors, parameterized constructors, and destructor ~ClassName().




Constructor initializer lists (: member(value)) directly construct members before the body runs,
while normal initialization (assignments in body) default-constructs 
then assigns—making lists more efficient and required for const/refs



*/


#include <iostream>
#include <string>
using namespace std;

class Logger {
private:
    string name;

public:
    // Default constructor
    Logger() : name("default") {
        cout << "Logger [" << name << "] constructed (default)\n";
    }

    // Parameterized constructor
    Logger(const string& n) : name(n) {
        std::cout << "Logger [" << name << "] constructed (param)\n";
    }

    // Destructor
    ~Logger() {
        std::cout << "Logger [" << name << "] destroyed\n";
    }

    void log(const string& msg) const {
        std::cout << "[" << name << "] " << msg << '\n';
    }
};

int main() {
    Logger l1;              // calls default constructor
    Logger l2("FileLog");   // calls parameterized constructor

    l1.log("hello");
    l2.log("world");

    // When main ends, l2 and then l1 are destroyed and destructor messages print.
    return 0;
}

