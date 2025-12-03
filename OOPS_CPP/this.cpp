/*

Inside non-static member functions, this is a pointer to the current object.
 Returning *this by reference enables a fluent/chaining style API


*/



#include <iostream>

class Vector2D {
private:
    double x, y;

public:
    Vector2D(double x_, double y_) : x(x_), y(y_) {}

    // Add another vector, return reference to *this to allow chaining
    Vector2D& add(const Vector2D& other) {
        x += other.x;
        y += other.y;

        return *this;
        
    }

    void print() const {
        std::cout << "(" << x << ", " << y << ")\n";
    }
};

int main() {
    Vector2D a(1.0, 2.0);
    Vector2D b(3.0, 4.0);
    Vector2D c(5.0, 6.0);
    
    a.add(b).add(c); // chained calls on the same object
    a.print();

    return 0;
}

/*

Call: a.add(b) → other binds to b (const reference, no copy)

Modify: a.x += b.x; a.y += b.y (mutates a in-place)

Return: *this (address of a)

Chain: .add(c) called on same a reference

*/