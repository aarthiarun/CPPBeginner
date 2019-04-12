//
// Created by Arunmozhi Rethinathevar Anbazhagan on 2019-04-08.
//

#include "ComplexNumberPolar.h"

using namespace std;

ComplexNumberPolar::ComplexNumberPolar() : modulus(0.0), argument(0.0) {
    cout << "No args constructor called" << endl;
}

ComplexNumberPolar::ComplexNumberPolar(double m, double a) : modulus(m), argument(a) {
    cout << "2 args constructor called" << endl;
}

ComplexNumberPolar::ComplexNumberPolar(const ComplexNumberPolar &rhs) :
        modulus(rhs.modulus), argument(rhs.argument) {
    cout << "copy constructor called" << endl;
}

ComplexNumberPolar::~ComplexNumberPolar() {
    cout << "Destructor called : realPart = " << modulus << " ; complexPart = " << argument << endl;
}

float ComplexNumberPolar::getModulusPart() const {
    return modulus;
}

void ComplexNumberPolar::setModulusPart(float r) {
    modulus = r;
}

float ComplexNumberPolar::getArgumentPart() const {
    return argument;
}

void ComplexNumberPolar::setArgumentPart(float c) {
    argument = c;
}