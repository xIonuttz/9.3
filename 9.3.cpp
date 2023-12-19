#include <iostream>

// Base Shape class with pure virtual method computeArea
class Shape {
public:
    virtual double computeArea() const = 0;
    virtual ~Shape() {}
};

// Derived Circle class
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor with radius
    Circle(double radius) : radius(radius) {}

    // Implementation of computeArea for Circle
    double computeArea() const override {
        return 3.14159 * radius * radius; // Assuming pi is 3.14159
    }
};

// Derived Rectangle class
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    // Constructor with length and width
    Rectangle(double length, double width) : length(length), width(width) {}

    // Implementation of computeArea for Rectangle
    double computeArea() const override {
        return length * width;
    }
};

// Derived Square class
class Square : public Shape {
private:
    double side;

public:
    // Constructor with side
    Square(double side) : side(side) {}

    // Implementation of computeArea for Square
    double computeArea() const override {
        return side * side;
    }
};

int main() {
    // Create instances of Circle, Rectangle, and Square
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);
    Square square(3.0);

    // Compute and display the areas
    std::cout << "Area of Circle: " << circle.computeArea() << " square units\n";
    std::cout << "Area of Rectangle: " << rectangle.computeArea() << " square units\n";
    std::cout << "Area of Square: " << square.computeArea() << " square units\n";

    return 0;
}
