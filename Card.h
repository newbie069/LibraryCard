#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <vector>
#include <memory>
#include "Student.h"
using namespace std;

class Card:public Student
{
private:
    int id, date, deadline;
public:
    int getId();
    int getDate();
    int getDeadline();
    void setInfo();
    void getInfo();
    void addCard(vector<unique_ptr<Student>>&);
    void printCard(vector<unique_ptr<Student>>);
    void deleteCard(vector<unique_ptr<Student>>&);
};

#endif // CARD_H
