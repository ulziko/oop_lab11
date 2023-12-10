#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class TwoDShape {
public:
    virtual void read() = 0;
    virtual float area() const = 0;
    virtual const char* getName() const = 0;
    virtual ~TwoDShape() {}
};

class Circle : public TwoDShape {
private:
    float radius;

public:
    Circle() : radius(0.0) {}

    void read() override {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
    }

    float area() const override {
        return 3.14159 * radius * radius; // Assuming pi is approximately 3.14159
    }

    const char* getName() const override {
        return "Circle";
    }
};

class Square : public TwoDShape {
private:
    float sideLength;

public:
    Square() : sideLength(0.0) {}

    void read() override {
        cout << "Enter the side length of the square: ";
        cin >> sideLength;
    }

    float area() const override {
        return sideLength * sideLength;
    }

    const char* getName() const override {
        return "Square";
    }
};

class Triangle : public TwoDShape {
private:
    float base;
    float height;

public:
    Triangle() : base(0.0), height(0.0) {}

    void read() override {
        cout << "Enter the base length of the triangle: ";
        cin >> base;
        cout << "Enter the height of the triangle: ";
        cin >> height;
    }

    float area() const override {
        return 0.5 * base * height;
    }

    const char* getName() const override {
        return "Triangle";
    }
};

float getAreaWrapper(TwoDShape* shape) {
    return shape->area();
}

int main() {
    const int numberOfShapes = 20;

    // Seed the random number generator
    srand(static_cast<unsigned>(time(0)));

    vector<TwoDShape*> shapesList;

    for (int i = 0; i < numberOfShapes; i++) {
        char shapeType;
        shapeType = 'A' + rand() % 3; // 'A' for Circle, 'B' for Square, 'C' for Triangle

        TwoDShape* shape = nullptr;

        switch (shapeType) {
            case 'A':
                shape = new Circle();
                break;
            case 'B':
                shape = new Square();
                break;
            case 'C':
                shape = new Triangle();
                break;
        }

        shape->read();
        shapesList.push_back(shape);
    }

    cout << "Shapes before sorting by area:\n";
    for (const auto& shape : shapesList) {
        cout << "Name: " << shape->getName() << endl;
        cout << "Area: " << shape->area() << endl;
        cout << "------------------" << endl;
    }

    // Sorting the shapes by area
    sort(shapesList.begin(), shapesList.end(), [](TwoDShape* a, TwoDShape* b) {
        return getAreaWrapper(a) < getAreaWrapper(b);
    });

    cout << "Shapes after sorting by area:\n";
    for (const auto& shape : shapesList) {
        cout << "Name: " << shape->getName() << endl;
        cout << "Area: " << shape->area() << endl;
        cout << "------------------" << endl;
        delete shape; // Don't forget to delete dynamically allocated objects
    }

    return 0;
}
