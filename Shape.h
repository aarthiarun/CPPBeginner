//
// Created by Arunmozhi Rethinathevar Anbazhagan on 2019-04-10.
//

#ifndef SAMPLEPROJECT_SHAPE_H
#define SAMPLEPROJECT_SHAPE_H

#include <string>

using namespace std;

class Shape {
private:
    string shapeType;
public:
    Shape();

    Shape(string s);

    Shape(const Shape &rhs);

    ~Shape();

    Shape &operator=(const Shape &rhs);
};

#endif //SAMPLEPROJECT_SHAPE_H
