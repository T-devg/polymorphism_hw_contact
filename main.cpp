#include <iostream>
#include "PhoneBook.h"
int main() {
    PhoneBook book;
    book.contacts.push_back(new Friend("Brown", "Paris",
        "111222333", *new Date()));
    book.contacts.push_back(new Colleague("Google", "NewYork",
        "987654321", "555123", "John"));
    book.contacts.push_back(new Person("Smith", "London", "123456789"));
    int choice;
    do {
        cout << "\n===== Phone Book =====" << endl;
        cout << "1. Add contact" << endl;
        cout << "2. Show contacts" << endl;
        cout << "3. Edit contact" << endl;
        cout << "4. Delete contact" << endl;
        cout << "5. Find contact" << endl;
        cout << "0. Exit" << endl;
        cout << "Your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                book.addContact();
                break;

            case 2:
                book.showAll();
                break;

            case 3:
                book.editContact();
                break;

            case 4:
                book.deleteContact();
                break;

            case 5:
                book.searchContact();
                break;

            case 0:
                cout << "Programme end" << endl;
                break;

            default:
                cout << "Incorrect input!" << endl;
        }

    } while (choice != 0);

    return 0;
}