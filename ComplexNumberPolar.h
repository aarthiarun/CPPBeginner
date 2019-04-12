//
// Created by Arunmozhi Rethinathevar Anbazhagan on 2019-04-08.
//

#ifndef SAMPLEPROJECT_COMPLEXNUMBERPOLAR_H
#define SAMPLEPROJECT_COMPLEXNUMBERPOLAR_H

#include "iostream"

using namespace std;

class ComplexNumber;

class ComplexNumberPolar {
private:
    float modulus;
    float argument;
public:
    ComplexNumberPolar();

    ComplexNumberPolar(double mod, double arg);

    ComplexNumberPolar(const ComplexNumberPolar &rhs);

    ~ComplexNumberPolar();

    float getModulusPart() const;

    void setModulusPart(float r);

    float getArgumentPart() const;

    void setArgumentPart(float c);

    friend ComplexNumber addTwoComplexNumbers
            (const ComplexNumber &cart, const ComplexNumberPolar &polar);
};

#endif //SAMPLEPROJECT_COMPLEXNUMBERPOLAR_H
