#include "Card.h"

int main()
{
    Card card;
    vector<unique_ptr<Student>> list;
    list.resize(0);
    int choice;
    do
    {
        cout << "Choose your option" << endl;
        cout << "1. Add a new card" << endl;
        cout << "2. Print list of card information" << endl;
        cout << "3. Delete a card" << endl;
        cout << "4. Quit" << endl;
        cout << "Your choice: ";
        while (cin >> choice && choice != 1 && choice != 2 && choice != 3 && choice != 4)
        {
            cout << "Invalid choice. Type again: ";
        }
        system("cls");
        switch (choice)
        {
        case 1:
            system("cls");
            card.addCard(list);
            break;
        case 2:
            system("cls");
            card.printCard(list);
            break;
        case 3:
            system("cls");
            card.deleteCard(list);
            break;
        default: break;
        }
     } while (choice != 4);
     return 0;
}
