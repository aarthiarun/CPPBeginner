//
// Created by Arunmozhi Rethinathevar Anbazhagan on 2019-04-08.
//
#include <iostream>
#include "ComplexNumber.h"

using namespace std;

int ComplexNumber::numObjectsCreated = 0;
const double ComplexNumber::PI = 3.1415;

ComplexNumber::ComplexNumber() : realPart(0.0), complexPart(0.0) {
    numObjectsCreated++;
    cout << "No args constructor called" << endl;
}

ComplexNumber::ComplexNumber(double r, double c) : realPart(r), complexPart(c) {
    numObjectsCreated++;
    cout << "2 args constructor called" << endl;
}

ComplexNumber::ComplexNumber(const ComplexNumber &rhs) :
        realPart(rhs.realPart), complexPart(rhs.complexPart) {
    numObjectsCreated++;
    cout << "copy constructor called" << endl;
}

ComplexNumber::~ComplexNumber() {
    cout << "Destructor called : realPart = " << realPart << " ; complexPart = " << complexPart << endl;
}

ComplexNumber &ComplexNumber::operator+=(const ComplexNumber &rhs) {
    cout << "Inside operator overloading " << endl;
    this->realPart += rhs.realPart;
    this->complexPart += rhs.complexPart;
    return *this;
}

const ComplexNumber ComplexNumber::operator+(const ComplexNumber &rhs) const {
    ComplexNumber result(this->realPart + rhs.realPart,
                         this->complexPart + rhs.complexPart);
    return result;
}

ComplexNumber &ComplexNumber::operator++() {
    cout << "Inside pre-increment operator " << endl;
    this->realPart++;
    this->complexPart++;
    return *this;
}

const ComplexNumber ComplexNumber::operator++(int) {
    cout << "Inside post-increment operator " << endl;
    ComplexNumber result(this->realPart, this->complexPart);
    this->realPart++;
    this->complexPart++;
    return result;
}

float ComplexNumber::getRealPart() const {
    return realPart;
}

void ComplexNumber::setRealPart(float r) {
    realPart = r;
}

float ComplexNumber::getComplexPart() const {
    return complexPart;
}

void ComplexNumber::setComplexPart(float c) {
    complexPart = c;
}