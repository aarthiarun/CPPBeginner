//
// Created by Arunmozhi Rethinathevar Anbazhagan on 2019-04-10.
//

#include "Shape.h"
#include <iostream>

Shape::Shape() {
    cout << "SHAPE: Inside the default constructor " << endl;
}

Shape::Shape(string s) : shapeType(s) {
    cout << "SHAPE: Inside 1-args constructor " << endl;
}

Shape::Shape(const Shape &rhs) {
    cout << "SHAPE: Inside the copy constructor " << endl;
    shapeType = rhs.shapeType;
}

Shape::~Shape() {
    cout << "SHAPE: Inside the destructor" << endl;
}

Shape &Shape::operator=(const Shape &rhs) {
    cout << "SHAPE: Inside the assignment operator" << endl;
    if (this != &rhs) {
        shapeType = rhs.shapeType;
    }
    return *this;
}