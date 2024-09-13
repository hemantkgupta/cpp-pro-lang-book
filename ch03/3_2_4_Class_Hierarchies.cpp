#include <iostream>
#include <vector>
using namespace std;

// An abstract class
class Shape {
public:
    virtual void draw() const = 0;    // Pure virtual function
    virtual void move(int x, int y) = 0;
    virtual void rotate(int angle) = 0;
    virtual ~Shape() {}               // Virtual destructor for cleanup
};

class Circle : public Shape {

private:
    int radius;

public:
    Circle(int r) : radius(r) {}

    void draw() const override {
        cout << "Drawing a Circle\n";
    }
    void move(int x, int y) override {
        cout << "Moving Circle to (" << x << ", " << y << ")\n";
    }
    void rotate(int) override {
        cout << "Rotating Circle\n";
    }

};

class Smiley : public Circle {

public:
    Smiley(int r) : Circle(r) {}

    void draw() const override {
        Circle::draw(); // Call base class draw()
        cout << "Drawing Smiley Face\n";
    }
    void move(int x, int y) override {
        Circle::move(x, y); // Call base class move()
        cout << "Moving Smiley Face\n";
    }
    void rotate(int angle) override {
        cout << "Rotating Smiley Face by " << angle << " degrees\n";
    }
};

// Polymorphism by treating all derived classes as Shape
void draw_all(vector<Shape*>& shapes) {
    for (Shape* shape : shapes) {
        shape->draw();
    }
}

int main() {
    vector<Shape*> shapes;
    Circle circle(10);
    Smiley smiley(5);

    shapes.push_back(&circle);
    shapes.push_back(&smiley);

    draw_all(shapes); // Will call draw() for each shape
    return 0;
}