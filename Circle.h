//
// Created by Arunmozhi Rethinathevar Anbazhagan on 2019-04-10.
//

#ifndef SAMPLEPROJECT_CIRCLE_H
#define SAMPLEPROJECT_CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
private:
    float radius;
public:
    Circle();

    Circle(string s, float r);

    Circle(const Circle &rhs);

    ~Circle();

    Circle &operator=(const Circle &rhs);
};

#endif //SAMPLEPROJECT_CIRCLE_H
