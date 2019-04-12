#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include "ComplexNumber.h"
#include "ComplexNumberPolar.h"
#include "Shape.h"
#include "Circle.h"

using namespace std;


//*********************************************************************************************************************
//
//                                                 7. REFERENCES
//
//*********************************************************************************************************************

//class ComplexNumber {
//private:
//    int realPart;
//    int complexPart;
//public:
//    ComplexNumber() : realPart(0.0), complexPart(0.0)
//    {
//        cout << "No arg constructor called" << endl;
//    }
//    ComplexNumber(double r, double c) : realPart(r), complexPart(c)
//    {
//        cout << "Inside the 2-args constructor" << endl;
//    }
//    ComplexNumber(ComplexNumber& rhs) : realPart(rhs.getRealPart()), complexPart(rhs.getComplexPart())
//    {
//        cout << "Inside the copy constructor" << endl;
//    }
//
//    ~ComplexNumber() {
//        cout << "Inside destructor" << endl;
//    }
//
//    void print() {
//        cout << "Address of this object " << this << endl;
//        cout << "Real = " << this->realPart << " ; Complex = " << this->complexPart << endl;
//    }
//
//    int getRealPart() {
//        return realPart;
//    }
//
//    int getComplexPart() {
//        return complexPart;
//    }
//};
//
//int main() {
//
//    char memoryBuffer[sizeof(ComplexNumber)];
//    void *place = (void *) memoryBuffer;
//    ComplexNumber *complexNumber = new(place) ComplexNumber(10, 5);
//    complexNumber->print();
//    complexNumber->~ComplexNumber();
//    cout << "All Done !" << endl;
////    ComplexNumber *complexNumber = new ComplexNumber[10];
////
////    for (int i = 0; i < 10; i++) {
////        cout << "Printing out dynamically allocated object " << i << endl;
////        complexNumber[i].print();
////    }
////
////    delete complexNumber;
////    cout << "All Done !" << endl;
//
//}


//int main() {
//    string firstname("asdjaskldkalsdsalkdsak");
//    string lastname = "Adksajkdajdksalkdsalkdsalkdsaljk";
//    string fullname = firstname + " " + lastname;
//
//    cout << firstname << endl;
//    cout << lastname << endl;
//    cout << fullname << endl;
//
//    cout << "Length = " << firstname.length() << endl;
//    cout << "Size = " << firstname.size() << endl;
//
//
//    cout << "sub string = " << firstname.substr(0,3) << endl;
//
//    cout << "sub string = " << firstname.erase(0,3) << endl;
//
//    cout << firstname << endl;
//
//
//
//    cout << "sub string = " << firstname.insert(0,"abab") << endl;
//
//    size_t position = firstname.find("abab");
//    firstname.replace(position, 4, "");
//    firstname.insert(position, "bbbb");
//
//    cout << "First Name = " << firstname << endl;
//
//
//    string someString ("abc def");
//    char *oldSchoolString = new char[someString.length() + 1];
//    strcpy (oldSchoolString, someString.c_str());
//    string recreatedString(oldSchoolString);
//    cout << "Modern (c++) string " << someString << endl
//        <<  "converted to C-style (char*) string " << oldSchoolString << endl
//        << "reconverted to Modern c++ string " << recreatedString << endl;
//
//    delete[] oldSchoolString;
//
//    return 0;
//}


//
//void swap(int& a, int& b) {
//    int temp = a;
//    a = b;
//    b = temp;
//}
//
//int& badFunctionReturnsReferenceToPointer() {
//    int* x = new int(10);
//    return *x;
//}
//
//int& badFunctionReturnsReferenceToStackVariable() {
//    int x(10);
//    return x;
//    // NO ! x will cease to exist when the function returns !
//}
//

//int main() {
////    int a = 5, b = 10;
////    cout << "Before swap | a = " << a << " ; b = " << b << endl;
////    swap(a, b);
////    cout << "After swap | a = " << a << " ; b = " << b << endl;
//
//
////    const int& a = 10;
////    cout << "a = " << a << endl;
//
//
////    int x = 5;
////    int z = 3;
////
////    int& y = x;
////    cout << "x = " << x << "; y = " << y << "; z = " << z << endl;
////
////    y = z;
////    cout << "x = " << x << "; y = " << y << "; z = " << z << endl;
////    y = 10;
////    cout << "x = " << x << "; y = " << y << "; z = " << z << endl;
//
////    int *x = NULL;
////    int& y = *x;
////    cout << y << endl;
//
////    int *x = new int(5);
////    int* & y = x;
////
////    cout << "Contents of the pointer x = " << *x
////        << " and contents of the reference pointer y = " << *y << endl;
////
////    delete x;
////    // delete y;
//
//
////    int x = 5;
////    int & y = x;
//////    int & & z = y;
//
//
//
////    int x = badFunctionReturnsReferenceToPointer();
////    cout << x << endl;
////    // no way to delete the pointer;
//
//    int x = badFunctionReturnsReferenceToStackVariable();
//    cout << x << endl;
//    // x will be invalid memory by this point !
//
//    return 0;
//}


//*********************************************************************************************************************
//
//                                                 8. CONST
//
//*********************************************************************************************************************

//class Student {
//private:
////    string studentName;
//    mutable string studentName;
//public:
//    Student(const char* name): studentName(name) {
//        cout << "Intitialized string to :" << studentName << endl;
//    }
//
//    void print() const {
//        cout << "Student name :" << studentName << endl;
//        // This member function is marked const, so it can not modify any member data
//        // Not possible to call a const method
//        // changeStudentName();
//    }
//
//    void print() {
//        cout << "Student name :" << studentName << endl;
//        // This member function is marked const, so it can not modify any member data
//        changeStudentName();
//    }
//
//    void changeStudentName() {
//        studentName = string("abcd"); // works with mutable keyword
//        cout << "Latest Student name :" << studentName << endl;
//    }
//};


//int main() {
////    const int x = 5;
////    // x = 10;
////
////    const string firstName("Arunmozhi");
////    // firstName.insert(0, "Mr. ");
//
//
////    int x = 5;
////    const int& y = x;
////    cout << "y = " << y << " and x = " << x << endl;
////    x += 10;
////    cout << "y = " << y << " and x = " << x << endl;
////    y = 10;
////    cout << "y = " << y << " and x = " << x << endl;
//
//
////    char firstName[] = "Arunmozhi";
////    char lastName[] = "Rethinathevar Anbazhagan";
////    char* p1 = firstName;
////    cout << "Initial value of p1 :" << p1 << endl;
////    p1[0] = 'Z';
////    cout << "Value of p1 after changing data: " << p1 << endl;
////    p1 = lastName;
////    cout << "p1 " << p1 << endl;
////
////    char firstName[] = "Arunmozhi";
////    char lastName[] = "Rethinathevar Anbazhagan";
////    const char* p1 = firstName;
////    cout << "Initial value of p1 :" << p1 << endl;
////    p1[0] = 'Z';
////    cout << "Value of p1 after changing data: " << p1 << endl;
////    p1 = lastName;
////    cout << "p1 " << p1 << endl;
////
////    char firstName[] = "Arunmozhi";
////    char lastName[] = "Rethinathevar Anbazhagan";
////    char* const p1 = firstName;
////    cout << "Initial value of p1 :" << p1 << endl;
////    p1[0] = 'Z';
////    cout << "Value of p1 after changing data: " << p1 << endl;
////    p1 = lastName;
////    cout << "p1 " << p1 << endl;
////
////    char firstName[] = "Arunmozhi";
////    char lastName[] = "Rethinathevar Anbazhagan";
////    const char* const p1 = firstName;
////    cout << "Initial value of p1 :" << p1 << endl;
////    p1[0] = 'Z';
////    cout << "Value of p1 after changing data: " << p1 << endl;
////    p1 = lastName;
////    cout << "p1 " << p1 << endl;
//
////    const Student const_student("zxcv");
////    const_student.print();
////
////    Student non_const_student("zxcv");
////    non_const_student.print();
//
//
//    const char name[50] = "Vitthal";
//    const Student studentOne(name);
//    //Student& studentTwo = studentOne;
//    Student& studentThree = const_cast<Student &>(studentOne);
//    studentThree.print();
//
//    return 0;
//}


//class ComplexNumber {
//private:
//    float realPart;
//    float complexPart;
//public:
//    ComplexNumber(): realPart(0.0), complexPart(0.0)
//    {
//        cout << "No args constructor is called...." << endl;
//    }
//
//    ComplexNumber(double c, double r) : realPart(r), complexPart(c)
//    {
//        cout << "2 args constructor is called...." << endl;
//    }
//
//    ComplexNumber(const ComplexNumber& rhs) : realPart(rhs.realPart), complexPart(rhs.complexPart)
//    {
//        cout << "Inside copy constructor " << endl;
//    }
//
//    ~ComplexNumber()
//    {
//        cout << "Inside the destructor: real Part = " << realPart << " complexPart = " << complexPart << endl;
//    }
//
//    float getRealPart() const {
//        return realPart;
//    }
//
//    void setRealPart(float r) {
//        realPart = r;
//    }
//};
//
//void printComplexNumberPassByValue(ComplexNumber c)
//{
//    cout << "Inside printComplexNumber" << endl;
//    cout << c.getRealPart() << endl;
//    c.setRealPart(3.14);
//}
//
//void printComplexNumberPassByReference(ComplexNumber& c)
//{
//    cout << "Inside printComplexNumber" << endl;
//    cout << c.getRealPart() << endl;
//    c.setRealPart(3.14);
//}
//
//void printComplexNumberPassByConstReference(const ComplexNumber& c)
//{
//    cout << "Inside printComplexNumber" << endl;
//    cout << c.getRealPart() << endl;
//    // c.setRealPart(3); compiler catches
//}
//
//
//int main() {
//    ComplexNumber c(3.4, 5.3);
//    cout << "Before passing by value " << c.getRealPart() << endl;
//    printComplexNumberPassByValue(c);
//    cout << "After passing by value " << c.getRealPart() << endl;
//
//    cout << ".................." << endl;
//
//    cout << "Before passing by non-const reference " << c.getRealPart() << endl;
//    printComplexNumberPassByReference(c);
//    cout << "After passing by non-const reference " << c.getRealPart() << endl;
//
//    cout << ".................." << endl;
//
//    cout << "Before passing by const reference " << c.getRealPart() << endl;
//    printComplexNumberPassByConstReference(c);
//    cout << "After passing by const reference " << c.getRealPart() << endl;
//
//    cout << ".................." << endl;
//    return 0;
//}

//*********************************************************************************************************************
//
//                                                 9. STATIC
//
//*********************************************************************************************************************

//void power() {
//    // static int i = 2;
//    int i = 2;
//    cout << "i = " << i << endl;
//    i = i * 2;
//}
//
//int main() {
//    power();
//    power();
//    power();
//}

//class ComplexNumber {
//private:
//    float realPart;
//    float complexPart;
//    static int numObjectsCreated;
//public:
//    constexpr static double e = 2.71828; // define inside, also dummy-define outside;
//    const static double PI; // [Declare inside and define outside]
//
//    ComplexNumber(): realPart(0.0), complexPart(0.0)
//    {
//        numObjectsCreated++;
//        cout << "No args constructor is called...." << endl;
//    }
//
//    ComplexNumber(double c, double r) : realPart(r), complexPart(c)
//    {
//        numObjectsCreated++;
//        cout << "2 args constructor is called...." << endl;
//    }
//
//    ComplexNumber(const ComplexNumber& rhs) : realPart(rhs.realPart), complexPart(rhs.complexPart)
//    {
//        numObjectsCreated++;
//        cout << "Inside copy constructor " << endl;
//    }
//
//    ~ComplexNumber()
//    {
//        cout << "Inside the destructor: real Part = " << realPart << " complexPart = " << complexPart << endl;
//    }
//
//    float getRealPart() const {
//        return realPart;
//    }
//
//    void setRealPart(float r) {
//        realPart = r;
//    }
//
//     static int getNumObjectsCreated() {
//         return numObjectsCreated;
//    }
//};
//
//int ComplexNumber::numObjectsCreated = 0;
//const double ComplexNumber::e; // define inside, also dummy-define outside;
//const double ComplexNumber::PI = 3.1415; // [Declare inside and define outside]
//
//int main() {
//
//    cout << "complex number count = " << ComplexNumber::getNumObjectsCreated() << endl;
//
//    ComplexNumber c(3.4, 5.3);
//    cout << "c = " << c.getRealPart() << endl;
//    cout << "complex number count = " << ComplexNumber::getNumObjectsCreated() << endl;
//
//    ComplexNumber c1(8, 6);
//    cout << "c1 = " << c1.getRealPart() << endl;
//    cout << "complex number count = " << ComplexNumber::getNumObjectsCreated() << endl;
//
//    cout << endl;
//    cout << "const variable e = " << ComplexNumber::e << endl;
//    cout << "const variable PI = " << ComplexNumber::PI << endl;
//    cout << endl;
//
//    return 0;
//}


//*********************************************************************************************************************
//
//                                                 10. FRIEND
//
//*********************************************************************************************************************

//ComplexNumber addTwoComplexNumbers(const ComplexNumber& cart, const ComplexNumberPolar& polar)
//{
//    float realPart = polar.modulus * cos(polar.argument * ComplexNumber::PI/180);
//    float complexPart = polar.modulus * sin(polar.argument * ComplexNumber::PI/180);
//    ComplexNumber result(realPart + cart.realPart, complexPart + cart.complexPart);
//    return result;
//}
//
//int main() {
//    ComplexNumber cart(5,5);
//    ComplexNumberPolar polar(10, 45);
//
//
//    ComplexNumber sumOfTwoComplexNumber = addTwoComplexNumbers(cart, polar);
//    cout << "Real part = " << sumOfTwoComplexNumber.getRealPart()
//            << " ; Complex part = " << sumOfTwoComplexNumber.getComplexPart() << endl;
//}


//class Student
//{
//private:
//    string studentName;
//public:
//    Student(const char* name): studentName(name)
//    {
//        cout << "Initialized string to " << studentName << endl;
//    }
//
//    friend class School;
//};
//
//class School
//{
//private:
//    string schoolName;
//public:
//    School(const char* name): schoolName(name)
//    {
//        cout << "Initialized string to : " << schoolName << endl;
//    }
//
//    void admitStudent(const Student& s)
//    {
//        cout << "Admitting student " << s.studentName << endl;
//    }
//
//    void expelStudent(const Student& s)
//    {
//        cout << "Expelling student " << s.studentName << endl;
//    }
//};
//
//int main() {
//    Student s("arun");
//    School school("Private school");
//
//    school.admitStudent(s);
//    school.expelStudent(s);
//
//    return 0;
//}

//*********************************************************************************************************************
//
//                                                 11. OPERATOR OVERLOADING
//
//*********************************************************************************************************************


//
// external: << , >>
// internal: operator=, (), []
// can not overload ::, ?, :, .
//
// Internal pre-increment operator
// ComplexNumber& ComplexNumber::operator++()
//
// External pre-increment operator
// ComplexNumber& operator++(ComplexNumber& )

//class Student
//{
//private:
//    char * studentName;
//public:
//    Student& operator=(const Student &rhs)
//    {
//        // 1. check for self assignment
//        if (this != &rhs)
//        {
//            //2 . Deallocate any memory that Student is using internally (copy from constructor).
//            cout << "Freeing up memory for string " << studentName << endl;
//            delete[] studentName;
//
//            if (rhs.studentName != NULL)
//            {
//                //3. Allocate some memory to hold the contents of rhs
//                studentName = new char[50];
//
//                strcpy(studentName, rhs.studentName);
//            }
//        }
//        return *this;
//    }
//
//    ~Student(){
//        cout << "Destructor called... freeing up memory for string " << studentName << endl;
//        delete[] studentName;
//    }
//};

//ostream& operator<< (ostream& outputStream, const ComplexNumber& complexNumber)
//{
//    outputStream << " ComplexNumber : [real = " << complexNumber.realPart << " complex = " << complexNumber.complexPart << "] ";
//    return outputStream;
//}
//
//istream& operator>> (istream& inputStream, ComplexNumber& complexNumber)
//{
//    inputStream >> complexNumber.realPart >> complexNumber.complexPart;
//    return inputStream;
//}
//
//int main() {
////    ComplexNumber a(3, 5);
////    ComplexNumber b(7, 6);
////    a += b;
////    cout << "real = " << a.getRealPart() << " | complex = " << a.getComplexPart() << endl;
////
////    ComplexNumber a1(1, 1);
////    ComplexNumber b1(2, 2);
////    ComplexNumber c1 = a1 + b1;
////    cout << "real = " << c1.getRealPart() << " | complex = " << c1.getComplexPart() << endl;
////
//
////    ComplexNumber a2(3,5);
////    ComplexNumber b2 = ++a2;
////    cout << "a2: real = " << a2.getRealPart() << " | complex = " << a2.getComplexPart() << endl;
////    cout << "b2: real = " << b2.getRealPart() << " | complex = " << b2.getComplexPart() << endl;
////
////    ComplexNumber c2(3,5);
////    ComplexNumber d2 = c2++;
////    cout << "c2: real = " << c2.getRealPart() << " | complex = " << c2.getComplexPart() << endl;
////    cout << "d2: real = " << d2.getRealPart() << " | complex = " << d2.getComplexPart() << endl;
//
////    ComplexNumber c3(3, 4);
////    int x = 5, y = 7;
////    cout << x << c3 << y << endl;
////    cout << "Initial value of a " << c3 << endl;
////    cin >> c3;
////    cout << "Final value of a" << c3 << endl;
//    return 0;
//}

//*********************************************************************************************************************
//
//                                                 12. INHERITANCE
//
//*********************************************************************************************************************

//int main()
//{
//    cout << "Start of the program" << endl;
//    cout << endl << "Instantiate object c1" << endl;
//    Circle c1("Some shape", 3.5);
//    cout << endl << "Instantiate object c2" << endl;
//    Circle c2("Some other shape", 10.2);
//    cout << endl << "Assign c1=c2" << endl;
//    c1 = c2;
//    cout << endl << "Instantiate object c3 (copy constructor)" << endl;
//    Circle c3 = c1;
//    cout << endl << "End of program" << endl << endl;
//}


//class Shape_NonVirtual {
//private:
//    string shapeType;
//public:
//    void print() {
//        cout << "I am a shape, not sure of what type" << endl;
//    }
//};
//
//class Circle_NonVirtual : public Shape_NonVirtual
//{
//public:
//    void print()
//    {
//        cout << "I am a circle" << endl;
//    }
//};
//
//class Shape_Virtual {
//private:
//    string shapeType;
//public:
//    virtual void print() {
//        cout << "I am a shape, not sure of what type" << endl;
//    }
//};
//
//class Circle_Virtual : public Shape_Virtual
//{
//public:
//    void print()
//    {
//        cout << "I am a circle" << endl;
//    }
//};


//int main() {
//    Shape_NonVirtual s1;
//    Shape_Virtual s2;
////    cout << "Size of object with vPtr is : " << sizeof(s1) << endl;
////    cout << "Size of object without vPtr is : " << sizeof(s2) << endl;
//
//    Circle_NonVirtual c1;
//    Circle_Virtual c2;
//
////    cout << "Size of object with vPtr is : " << sizeof(c1) << endl;
////    cout << "Size of object without vPtr is : " << sizeof(c2) << endl;
////    cout << endl;
//
////    cout << "Circle Non virtual: print()" << endl;
////    c1.print();
////    cout << "Circle virtual: print()" << endl;
////    c2.print();
////    cout << endl;
//
//    Shape_NonVirtual s3 = c1;
//    Shape_Virtual s4 = c2;
//
////    s3.print();
////    s4.print();
//
//    Shape_Virtual *sPtr1 = new Circle_Virtual();
//    Shape_NonVirtual *sPtr2 = new Circle_NonVirtual();
////    sPtr1->print();
////    sPtr2->print();
//
//    Shape_Virtual& sRef1 = *sPtr1;
//    Shape_NonVirtual& sRef2 = *sPtr2;
////    sRef1.print();
////    sRef2.print();
//}


////========> Pure virtual base class
//
//class Shape_PureVirtual
//{
//private:
//    string shapeType;
//public:
//    virtual void print() = 0;
//    // a pure virtual function
//};
//
//class Circle_PureVirtual : public Shape_PureVirtual
//{
//public:
//    void print()
//    {
//        cout << "I am a circle" << endl;
//    }
//};
//
//int main() {
//    //error: variable type 'Shape_PureVirtual' is an abstract class
//    //note: unimplemented pure virtual method 'print' in 'Shape_PureVirtual'
//    //Shape_PureVirtual s1;
//    Circle_PureVirtual c1;
//}
//


// ====> Diamond hierarchy
//class Shape_DiamondHierarchy
//{
//private:
//    string shapeType;
//public:
//    virtual void print() = 0;
//    Shape_DiamondHierarchy()
//    {
//        cout << "Inside shape constructor" << endl;
//    }
//    ~Shape_DiamondHierarchy()
//    {
//        cout << "Inside shape destructor" << endl;
//    }
//};
//
//class Rectangle_DiamondHierarchy : public Shape_DiamondHierarchy
//{
//public:
//    int rectangle_length;
//    int rectangle_breadth;
//    void print()
//    {
//        cout << "I am rectangle" << endl;
//    }
//    Rectangle_DiamondHierarchy()
//    {
//        cout << "Inside rectangle constructor" << endl;
//    }
//    ~Rectangle_DiamondHierarchy() {
//        cout << "Inside rectangle destructor" << endl;
//    }
//};
//
//class Rhombus_DiamondHierarchy : public Shape_DiamondHierarchy
//{
//public:
//    int angle_between_sides;
//    void print()
//    {
//        cout << "I am rhombus" << endl;
//    }
//    Rhombus_DiamondHierarchy()
//    {
//        cout << "Inside rhombus constructor" << endl;
//    }
//    ~Rhombus_DiamondHierarchy() {
//        cout << "Inside rhombus destructor" << endl;
//    }
//};
//
//
//class Square_DiamondHierarchy : public Rhombus_DiamondHierarchy, public Rectangle_DiamondHierarchy
//{
//public:
//    Square_DiamondHierarchy() {
//        cout << "Inside square constructor" << endl;
//    }
//    ~Square_DiamondHierarchy() {
//        cout << "Inside square destructor" << endl;
//    }
//};
//
//int main() {
//    Square_DiamondHierarchy square;
//    //error: member 'print' found in multiple base classes of different types
////    square.print();
//    square.Rhombus_DiamondHierarchy::print();
//    square.Rectangle_DiamondHierarchy::print();
//}

// =============> Virtual Inheritance

//class Shape_DiamondHierarchy
//{
//private:
//public:
//    string shapeType;
//    Shape_DiamondHierarchy()
//    {
//        shapeType = "Unknown";
//        cout << "Inside shape constructor" << endl;
//    }
//    Shape_DiamondHierarchy(char * s) : shapeType(s)
//    {
//        cout << "Inside shape constructor" << endl;
//    }
//    ~Shape_DiamondHierarchy()
//    {
//        cout << "Inside shape destructor" << endl;
//    }
//};
//
//// NOTE : virtual class always calls default constructor
//class Rectangle_DiamondHierarchy : virtual public Shape_DiamondHierarchy
//{
//public:
//    int rectangle_length;
//    int rectangle_breadth;
//    void print()
//    {
//        cout << "I am rectangle" << endl;
//    }
//    Rectangle_DiamondHierarchy():Shape_DiamondHierarchy("abdc")
//    {
//        cout << "Inside rectangle constructor" << endl;
//    }
//    ~Rectangle_DiamondHierarchy() {
//        cout << "Inside rectangle destructor" << endl;
//    }
//};
//
//// NOTE : virtual class always calls default constructor
//class Rhombus_DiamondHierarchy : virtual public Shape_DiamondHierarchy
//{
//public:
//    int angle_between_sides;
//    void print()
//    {
//        cout << "I am rhombus" << endl;
//    }
//    Rhombus_DiamondHierarchy(): Shape_DiamondHierarchy("abdc")
//    {
//        cout << "Inside rhombus constructor" << endl;
//    }
//    ~Rhombus_DiamondHierarchy() {
//        cout << "Inside rhombus destructor" << endl;
//    }
//};
//
//
//class Square_DiamondHierarchy : public Rhombus_DiamondHierarchy, public Rectangle_DiamondHierarchy
//{
//public:
//    Square_DiamondHierarchy() {
//        cout << "Inside square constructor" << endl;
//    }
//    ~Square_DiamondHierarchy() {
//        cout << "Inside square destructor" << endl;
//    }
//};
//
//int main() {
//    Square_DiamondHierarchy square;
//    cout << square.shapeType << endl;
//}

// =============> Object Slicing
// C++ compiler will slice derived class object and extract only the base class portion and pass to the function
// To avoid slicing, pass function arguments as const references !


//class Shape_ObjectSlicing
//{
//private:
//public:
//    string shapeType;
//    Shape_ObjectSlicing()
//    {
//        shapeType = "Unknown";
//        cout << "Inside shape constructor" << endl;
//    }
//    Shape_ObjectSlicing(char * s) : shapeType(s)
//    {
//        cout << "Inside shape constructor" << endl;
//    }
//    ~Shape_ObjectSlicing()
//    {
//        cout << "Inside shape destructor" << endl;
//    }
//    virtual void print() const
//    {
//        cout << "I am a shape and my size is " << sizeof(*this) << " bytes " << endl;
//    }
//};
//
//class Rectangle_ObjectSlicing : public Shape_ObjectSlicing
//{
//public:
//    void print()
//    {
//        cout << "I am rectangle" << endl;
//    }
//    Rectangle_ObjectSlicing()
//    {
//        cout << "Inside rectangle constructor" << endl;
//    }
//    ~Rectangle_ObjectSlicing() {
//        cout << "Inside rectangle destructor" << endl;
//    }
//    virtual void print() const
//    {
//        cout << "I am a rectangle and my size is " << sizeof(*this) << " bytes " << endl;
//    }
//};
//
//void callPrint_Sliced(Shape_ObjectSlicing s)
//{
//    cout << endl << "Slicing is about to occur" << endl;
//    s.print();
//}
//
//void callPrint_NonSliced(const Shape_ObjectSlicing& s) {
//    cout << endl  << "No slicing can occur here" << endl;
//    s.print();
//}
//
//int main() {
//    Rectangle_ObjectSlicing rectangleObjectSlicing;
//    // callPrint_Sliced(rectangleObjectSlicing);
//    callPrint_NonSliced(rectangleObjectSlicing);
//}

// =============> No Virtual Function calls in constructors and destructors
// why ? Virtual functions "Don't exist" in a constructor or destructor
// any derived class constructor that calls your base class constructor will end up
// with the wrong version of the function being called.


// =============> Virtual destructor rocks
// any class that might ever be a base class should a virtual destructor


//class Shape_VirtualDestructor
//{
//private:
//public:
//    string shapeType;
//    Shape_VirtualDestructor()
//    {
//        shapeType = "Unknown";
//        cout << "Inside shape constructor" << endl;
//    }
//    Shape_VirtualDestructor(char * s) : shapeType(s)
//    {
//        cout << "Inside shape constructor" << endl;
//    }
//    //~Shape_VirtualDestructor()
//    virtual ~Shape_VirtualDestructor()
//    {
//        cout << "Inside shape destructor" << endl;
//    }
//};
//
//class Rectangle_VirtualDestructor : public Shape_VirtualDestructor
//{
//public:
//    Rectangle_VirtualDestructor()
//    {
//        cout << "Inside rectangle constructor" << endl;
//    }
//    ~Rectangle_VirtualDestructor() {
//        cout << "Inside rectangle destructor" << endl;
//    }
//};
//
//
//int main() {
//    Shape_VirtualDestructor *shape = new Rectangle_VirtualDestructor();
//    delete shape;
//}

// =============> Virtual function should never have default parameters
// Default values are statically bound, while virtual functions are dynamically bound
// The derived class function will be called, but with base class default values and
// anytime the base class changes default values, the derived class must do the same.



//class Shape_WithDefaultValues
//{
//private:
//public:
//    string shapeType;
//    Shape_WithDefaultValues()
//    {
//        shapeType = "Unknown";
//        cout << "Inside shape constructor" << endl;
//    }
//    virtual ~Shape_WithDefaultValues()
//    {
//        cout << "Inside shape destructor" << endl;
//    }
//
//    virtual void printNumber(int number = 10)
//    {
//        cout << "I am a shape - printing number " << number << endl;
//    }
//};
//
//class Rectangle_WithDefaultValues : public Shape_WithDefaultValues
//{
//public:
//    Rectangle_WithDefaultValues()
//    {
//        cout << "Inside rectangle constructor" << endl;
//    }
//    ~Rectangle_WithDefaultValues() {
//        cout << "Inside rectangle destructor" << endl;
//    }
//
//    virtual void printNumber(int number = 20)
//    {
//        cout << "I am a rectangle - printing number " << number << endl;
//    }
//};
//
//int main() {
//    Shape_WithDefaultValues *shapeWithDefaultValues = new Rectangle_WithDefaultValues();
//    shapeWithDefaultValues->printNumber();
//    delete shapeWithDefaultValues;
//}

// =============> Name Hiding
// same function but different signatures. base class method will be hidden.

//class Shape_WithDefaultValues
//{
//private:
//public:
//    string shapeType;
//    Shape_WithDefaultValues()
//    {
//        shapeType = "Unknown";
//        cout << "Inside shape constructor" << endl;
//    }
//    virtual ~Shape_WithDefaultValues()
//    {
//        cout << "Inside shape destructor" << endl;
//    }
//
//    void printNumber(int number)
//    {
//        cout << "I am a shape - printing number " << number << endl;
//    }
//};
//
//class Rectangle_WithDefaultValues : public Shape_WithDefaultValues
//{
//public:
//    Rectangle_WithDefaultValues()
//    {
//        cout << "Inside rectangle constructor" << endl;
//    }
//    ~Rectangle_WithDefaultValues() {
//        cout << "Inside rectangle destructor" << endl;
//    }
//
//    void printNumber()
//    {
//        cout << "I am a rectangle - printing number " << endl;
//    }
//};
//
//int main() {
//    Rectangle_WithDefaultValues *shapeWithDefaultValues = new Rectangle_WithDefaultValues();
//    shapeWithDefaultValues->printNumber();
//    // error: too many arguments to function call, expected 0, have 1; did you mean 'Shape_WithDefaultValues::printNumber'?
//    // shapeWithDefaultValues->printNumber(10);
//    shapeWithDefaultValues->Shape_WithDefaultValues::printNumber(10);
//    delete shapeWithDefaultValues;
//}

// =============> Never override non-virtual function in base class

//class Shape_WithDefaultValues
//{
//private:
//public:
//    string shapeType;
//    Shape_WithDefaultValues()
//    {
//        shapeType = "Unknown";
//        cout << "Inside shape constructor" << endl;
//    }
//    virtual ~Shape_WithDefaultValues()
//    {
//        cout << "Inside shape destructor" << endl;
//    }
//
//    void print()
//    {
//        cout << "I am a shape" << endl;
//    }
//};
//
//class Rectangle_WithDefaultValues : public Shape_WithDefaultValues
//{
//public:
//    Rectangle_WithDefaultValues()
//    {
//        cout << "Inside rectangle constructor" << endl;
//    }
//    ~Rectangle_WithDefaultValues() {
//        cout << "Inside rectangle destructor" << endl;
//    }
//
//    void print()
//    {
//        cout << "I am a rectangle" << endl;
//    }
//};
//
//int main() {
//    Rectangle_WithDefaultValues r;
//    Shape_WithDefaultValues *shape = &r;
//    Rectangle_WithDefaultValues *rect = &r;
//    shape->print();
//    rect->print();
//}

//*********************************************************************************************************************
//
//                                                 13. TEMPLATES
//
//*********************************************************************************************************************

//template <class T>
//void custom_swap(T& a, T& b)
//{
//    T temp = a;
//    a = b;
//    b = temp;
//}
//
//int main() {
//    string firstname("foo"), lastname("bar");
//    custom_swap(firstname, lastname);
//    cout << firstname << " " << lastname << endl;
//
//    int a(1), b(2);
//    custom_swap(a, b);
//    cout << "a = " << a << " ; b = " << b << endl;
//}


// override template

//template<class T>
//int smartCompare(const T& a, const T& b)
//{
//    if (a > b)
//        return 1;
//    if (a < b)
//        return -1;
//    return 0;
//}
//
//int smartCompare(const string& a, const string& b)
//{
//    int x,y = 0;
//    bool convertStringToInt = true;
//    string::size_type sz;
//
//    try {
//        x = stoi(a, &sz);
//    } catch (...) {
//        cout << "Conversion failed " << a << endl;
//        convertStringToInt = false;
//    }
//
//    try {
//        y = stoi(b, &sz);
//    } catch (...) {
//        cout << "Conversion failed " << b << endl;
//        convertStringToInt = false;
//    }
//
//    if (convertStringToInt == true) {
//        cout << "Converted both strings to ints.." << x << "," << y << endl;
//        return smartCompare(x, y);
//    }
//
//    if (a > b)
//        return 1;
//    if (a < b)
//        return -1;
//    return 0;
//}
//
//int main() {
//    int a = 5, b = 10, i = smartCompare(a, b);
//    cout << i << endl;
//
//    string firstname("abcd"), lastname("def");
//    i = smartCompare(firstname, lastname);
//    cout << i << endl;
//
//    i = smartCompare(string("100"), string("203"));
//    cout << i << endl;
//}

// templated smart pointer class

//class RefCount
//{
//private:
//    int count;
//public:
//    void AddRef() {
//        count++;
//    }
//    int Release(){
//        return --count;
//    }
//};
//
//template <typename T> class SmartPointer
//{
//private:
//    T* pData;
//    RefCount* reference;
//public:
//    SmartPointer(): pData(0), reference(0)
//    {
//        reference = new RefCount();
//        reference->AddRef();
//    }
//
//    SmartPointer(T* pValue) : pData(pValue), reference(0)
//    {
//        reference = new RefCount();
//        reference->AddRef();
//    }
//
//    SmartPointer(const SmartPointer<T>& sp) : pData(sp.pData), reference(sp.reference)
//    {
//        reference->AddRef();
//    }
//
//    SmartPointer<T>& operator = (const SmartPointer<T>& sp)
//    {
//        if (this != &sp) // Avoid self assignment
//        {
//            if (reference->Release() == 0) {
//                delete pData;
//                delete reference;
//            }
//
//            pData = sp.pData;
//            reference = sp.reference;
//            reference->AddRef();
//        }
//        return *this;
//    }
//
//    T getData() {
//        return *pData;
//    }
//
//    ~SmartPointer(){
//        int refCount = reference -> Release();
//        cout << "Destructor called... current reference count = " << refCount << endl;
//
//        if (refCount == 0)
//        {
//            delete pData;
//            delete reference;
//            cout << "Ref count is zero. Deleted underlying data" << endl;
//        }
//    }
//};
//
//
//int main() {
//    SmartPointer<string> p(new string("foo bar"));
//    {
//        SmartPointer<string> q = p;
//        cout << q.getData() << endl;
//
//        SmartPointer<string> r;
//        r = p;
//        cout << r.getData() << endl;
//    }
//    cout << p.getData() << endl;
//}

// template specialization

//template<class K, class V>
//class KeyValuePair {
//private:
//    K key;
//    V value;
//public:
//    KeyValuePair(K k, V v) : key(k), value(v)
//    {
//        cout << "Inside the class template (not a specialization)" << endl;
//    }
//    K getKey() const
//    {
//        return key;
//    }
//    V getValue() const {
//        return value;
//    }
//};
//
//template<>
//class KeyValuePair<string, string>
//{
//private:
//    string key;
//    string value;
//public:
//    KeyValuePair(string k, string v) : key(k), value(v)
//    {
//        cout << "Inside the complete template specialization" << endl;
//    }
//
//    string getKey() const {
//        return key;
//    }
//
//    string getValue() const {
//        return value;
//    }
//};
//
//template<class K>
//class KeyValuePair<K, int>
//{
//private:
//    K key;
//    int value;
//public:
//    KeyValuePair(K k, int v): key(k), value(v)
//    {
//        cout << "Inside the partial template specialization" << endl;
//    }
//
//    K getKey() const {
//        return key;
//    }
//
//    string getValue() const {
//        return value;
//    }
//};
//
//int main() {
//    string firstname("foo"), lastname("bar");
//    KeyValuePair<string, string> pair1(firstname, lastname);
//    KeyValuePair<string, int> pair2(firstname, 1);
//    KeyValuePair<float, float> pair3(9.2, 1.4);
//}

//*********************************************************************************************************************
//
//                                                 14. STANDARD TEMPLATE LIBRARY
//
//*********************************************************************************************************************

//    vector implementation
//
//
//class Person {
//private:
//    string name;
//public:
//    Person(string s) : name(s)
//    {
//        cout << "In the 1-argument constructor" << endl;
//    }
//
//    Person() {
//        cout << "In the no-argument constructor" << endl;
//    }
//
//    ~Person(){
//        cout << "In the destructor" << endl;
//    }
//
//    string getName() const {
//        return name;
//    }
//};
//
//int main() {
//
//    size_t  size = 4;
//    std::vector<Person> personVector(size);
//    personVector[0] = Person("abcd1");
//    personVector[1] = Person("abcd2");
//    personVector[2] = Person("abcd3");
//    personVector[3] = Person("abcd4");
//
//    personVector.push_back(Person("abcd5"));
//    cout << personVector.capacity() << endl;
//    cout << personVector.size() << endl;
//
////    for (int i = 0; i < personVector.size(); i++) {
////        cout << "Element #" << i << " has value "
////         << personVector[i].getName() << endl;
////     }
//
//    std::vector<Person>::iterator personIterator;
//    //std::vector<Person>::const_iterator personIterator;
//    for (personIterator = personVector.begin();
//        personIterator != personVector.end();
//        personIterator++) {
//        cout << personIterator->getName() << endl;
//        cout << (*personIterator).getName() << endl;
//    }
//
//    personVector.erase(personVector.begin(), personVector.end());
//    cout << personVector.size() << endl;
//}

// map implementation
//
//
//int main() {
//    map<string, string> personMap;
//    personMap.insert(std::pair<string, string>("foo1", "bar1"));
//    personMap.insert(std::pair<string, string>("foo2", "bar2"));
//    personMap["foo3"] = "bar3";
//    personMap["foo4"] = "bar4";
//
//    if (personMap.find("Ahmad") == personMap.end()) {
//        cout << "Ahmad is not in the map" << endl;
//    }
//
//    for (map<string, string>::iterator mapIterator = personMap.begin();
//         mapIterator != personMap.end();
//         ++mapIterator) {
//        cout << "key = " << mapIterator->first << " ; value = " << mapIterator->second << endl;
//    }
//
//    return 0;
//}


// STL algorithm
// find, count, sort, search, merge, for_each, transform
//

//int main() {
//    vector<string> names;
//    names.push_back("ABC");
//    names.push_back("def");
//    names.push_back("ghi");
//    names.push_back("JKL");
//    names.push_back("mno");
//
//    // find
//    vector<string>::iterator findIt = find(names.begin(), names.end(), "JKL");
//    cout << "Find algorithm" << endl << endl;
//    if (findIt == names.end())
//        cout << "Not found !! " << endl;
//    else
//        cout << "First object with value found at offset " << (findIt - names.begin()) << endl;
//
//    //transform
//    string someString = "AbcD";
//    cout << "Initial value: " << someString << endl;
//    transform(someString.begin(), someString.end(), someString.begin(), ::toupper);
//    cout << "Final value: " << someString << endl;
//}

//*********************************************************************************************************************
//
//                                                 15. C++ CASTS
//
//                           const_cast, static_cast, dynamic_cast, reinterpret_cast
//*********************************************************************************************************************

// const_cast - (compile time check) to get rid of constness
// dynamic_cast - (runtime check )only safe way to downcast a variable (i.e from base class to derived class)
// static_cast - (compile time check)
// reinterpret_cast - Half baked typecast - very arcane, forget about it - almost never used.


//
//class Student {
//private:
//    string studentName;
//public:
//    Student(string name) : studentName(name) {
//        cout << "Intitialized string to " << studentName << endl;
//    }
//
//    void print() {
//        cout << "Student name :" << studentName << endl;
//    }
//};
//
//int main() {
//    string name("foo");
//    const Student studentOne(name);
//    // error: binding value of type 'const Student' to reference to type 'Student' drops 'const' qualifier
//    // Student& studentTwo = studentOne;
//    Student& studentTwo = const_cast<Student &>(studentOne);
//}


// dynamic_cast & RTTI
// RTTI - Realtime type identification
// dynamic_cast uses RTTI (Realtime type identification) to ensure at runtime
// and unsuccessful cast returns null

//class Shape_Cast
//{
//private:
//public:
//    string shapeType;
//    void print()
//    {
//        cout << "I am shape" << endl;
//    }
//    Shape_Cast()
//    {
//        shapeType = "Unknown";
//        cout << "Inside the shape constructor" << endl;
//    }
//
//    virtual ~Shape_Cast() {
//        cout << "Inside shape destructor" << endl;
//    }
//};
//
//class Rectangle_Cast : public Shape_Cast
//{
//private:
//public:
//    int length;
//    int breadth;
//    void print()
//    {
//        cout << "I am rectangle" << endl;
//    }
//    Rectangle_Cast()
//    {
//        cout << "Inside the rectangle constructor" << endl;
//    }
//
//    virtual ~Rectangle_Cast() {
//        cout << "Inside rectangle destructor" << endl;
//    }
//};
//
//int main() {
//    Shape_Cast* shape = new Shape_Cast();
//    Shape_Cast* shape2 = new Rectangle_Cast();
//
//    Rectangle_Cast * rectangle = dynamic_cast<Rectangle_Cast*>(shape);
//    if (rectangle == NULL) {
//        cout << "unable to downcast for rectangle" << endl;
//    }
//
//    // error: libc++abi.dylib: terminating with uncaught exception of type std::bad_typeid: std::bad_typeid
//    // cout << typeid(*rectangle).name() << endl;
//
//    Rectangle_Cast * rectangle2 = dynamic_cast<Rectangle_Cast*>(shape2);
//    if (rectangle2 == NULL) {
//        cout << "unable to downcast" << endl;
//    } else {
//        cout << "downcast is successful for rectangle 2" << endl;
//    }
//
//    cout << typeid(*rectangle2).name() << endl;
//}


// static const
//
// explicit conversions in legal way such as constructor, operators


class ComplexNumberPolarCast {
private:
public:
    int modulus;
    int argument;
    ComplexNumberPolarCast(int m, int r) : modulus(m), argument(r){}
};

class ComplexNumberCast {
private:
public:
    int real;
    int complex;
    ComplexNumberCast() {
        cout << "Inside ComplexNumberCast default constructor" << endl;
    }

    explicit ComplexNumberCast(const ComplexNumberPolarCast &polar) {
        this->real = polar.modulus * cos(polar.argument * 3.1415 / 180);
        this->complex = polar.modulus * sin(polar.argument * 3.1415 / 180);
    }
    void print() {
        cout << "real = " << real << " complex = " << complex << endl;
    }
};

void printComplexNumber(ComplexNumberCast c)
{
    c.print();
}


int main() {
    ComplexNumberPolarCast polar(4, 5);
    // error: no viable conversion from 'ComplexNumberPolarCast' to 'ComplexNumberCast'
//     ComplexNumberCast f1 = polar;
//    ComplexNumberCast f = ComplexNumberCast(polar);
//    f.print();
//
////    //error: no matching function for call to 'printComplexNumber'
////    printComplexNumber(polar);

    printComplexNumber(static_cast<ComplexNumberCast>(polar));
}


//*********************************************************************************************************************
//
//                                                 15. C++ EXCEPTIONS
//
//*********************************************************************************************************************