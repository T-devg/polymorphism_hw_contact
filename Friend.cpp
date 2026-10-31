//
// Created by Ольга on 28.10.2026.
//

#include "Friend.h"

Friend::Friend(string surname, string address, string phone, Date birthday) {
    this->surname=surname;
    this->address = address;
    this->phone = phone;
    this->birthDate = birthday;
}

void Friend::show() const {
    cout << "Friend: " << surname << endl;
    cout << "Address: " << address << endl;
    cout << "Phone: " << phone << endl;
    cout << "Birth date: " << birthDate << endl;
}

void Friend::edit() {
    cout << "New surname: ";
    cin >> surname;
    cout << "New adress: ";
    cin >> address;
    cout << "Phone: ";
    cin >> phone;
    cout << "New birth date: ";
    cin >> birthDate;
}
