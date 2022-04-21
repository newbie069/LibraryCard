#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student
{
private:
    string name, iClass;
    int age;
public:
    string getName();
    string getClass();
    int getAge();
    virtual int getId() = 0;
    virtual void setInfo();
    virtual void getInfo();
};

#endif // STUDENT_H
