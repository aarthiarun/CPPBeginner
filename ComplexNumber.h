//
// Created by Arunmozhi Rethinathevar Anbazhagan on 2019-04-08.
//

#ifndef SAMPLEPROJECT_COMPLEXNUMBER_H
#define SAMPLEPROJECT_COMPLEXNUMBER_H

#include "iostream"

using namespace std;

class ComplexNumberPolar;

class ComplexNumber {
private:
    float realPart;
    float complexPart;
    static int numObjectsCreated;

public:
    const static double PI;

    ComplexNumber();

    ComplexNumber(double r, double c);

    ComplexNumber(const ComplexNumber &rhs);

    ~ComplexNumber();

    ComplexNumber &operator+=(const ComplexNumber &rhs);

    const ComplexNumber operator+(const ComplexNumber &rhs) const;

    // pre-increment
    ComplexNumber &operator++();

    // post-increment
    // (dummy did not serve any purpose other than distinguishing pre and post increment operator)
    const ComplexNumber operator++(int);

    float getRealPart() const;

    void setRealPart(float r);

    float getComplexPart() const;

    void setComplexPart(float c);

    friend ostream &operator<<(ostream &s, const ComplexNumber &c);

    friend istream &operator>>(istream &s, ComplexNumber &c);

    friend ComplexNumber addTwoComplexNumbers
            (const ComplexNumber &cart, const ComplexNumberPolar &polar);
};


#endif //SAMPLEPROJECT_COMPLEXNUMBER_H
