#include "Card.h"

int Card::getId()
{
    return id;
}
int Card::getDate()
{
    return date;
}
int Card::getDeadline()
{
    return deadline;
}
void Card::setInfo()
{
    Student::setInfo();
    cout << "Enter id: ";
    while(cin >> this->id && (this->id < 0))
    {
        cout << "Invalid ID. Type again: ";
    }
    cout << "Enter the day you borrow book: ";
    while(cin >> this->date && (this->date < 0 || this->date > 31))
    {
        cout << "Invalid date. Type again: ";
    }
    cout << "Enter the deadline you have to return the book: ";
    while(cin >> this->deadline && (this->deadline < 0 || this->deadline > 31))
    {
        cout << "Invalid date of deadline. Type again: ";
    }
}
void Card::getInfo()
{
    Student::getInfo();
    cout << "ID: " << getId() << endl << "Borrowed date: " << getDate() << endl << "Deadline: " << endl;
}
void Card::addCard(vector<unique_ptr<Student>> &list)
{
    list.push_back(make_unique<Card>());
    list[list.size() - 1]->setInfo();
    cout << "----" << endl;
}
void Card::printCard(vector<unique_ptr<Student>> list)
{
    for (int i = 0; i < list.size(); i++)
    {
        list[i]->getInfo();
        cout << "----" << endl;
    }
}
void Card::deleteCard(vector<unique_ptr<Student>> &list)
{
    int deleteId;
    int found = 0;
    cout << "Enter the card ID you want to delete: ";
    cin >> deleteId;
    for (int i = 0; i < list.size(); i++)
    {
        if (list[i]->getId() == deleteId)
        {
            found = 1;
            list.erase(list.begin() + i);
            cout << "The card with ID " << deleteId << " have been deleted" << endl;
        }
    }
    if (found == 0)
    {
        cout << "This ID does not exist" << endl << "----" << endl;
    }
}
