//
// Created by Arunmozhi Rethinathevar Anbazhagan on 2019-04-10.
//

#include "Circle.h"
#include <iostream>

Circle::Circle() : radius(0.0) {
    cout << "CIRCLE : Inside default constructor" << endl;
}

Circle::Circle(string s, float r) : Shape(s), radius(r) {
    cout << "CIRCLE : Inside 2-arg constructor" << endl;
}

Circle::Circle(const Circle &rhs) {
    cout << "CIRCLE : Inside copy constructor" << endl;
    radius = rhs.radius;
}

Circle::~Circle() {
    cout << "CIRCLE : Inside the destructor" << endl;
}

Circle &Circle::operator=(const Circle &rhs) {
    cout << "CIRCLE : Inside the assignment operator" << endl;
    if (this != &rhs) {
        Shape::operator=(rhs);
        radius = rhs.radius;
    }
    return *this;
}