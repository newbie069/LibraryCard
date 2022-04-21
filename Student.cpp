#include "Student.h"

string Student::getName()
{
    return name;
}
string Student::getClass()
{
    return iClass;
}
int Student::getAge()
{
    return age;
}
void Student::setInfo()
{
    cout << "Enter name: ";
    cin.ignore();
    getline(cin, this->name);
    cout << "Enter age: ";
    while (cin >> this->age && (this->age < 0))
    {
        cout << "Invalid age. Type again: ";
    }
    cout << "Enter class: ";
    cin.ignore();
    getline(cin, this->iClass);
}
void Student::getInfo()
{
    cout << "Name: " << getName() << endl << "Age: " << getAge() << endl << "Class: " << getClass() << endl;
}
