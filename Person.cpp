//
// Created by Ольга on 27.10.2026.
//

#include "Person.h"


Person::Person(string surname, string address, string phone) {
    this->surname = surname;
    this->address = address;
    this->phone = phone;
}

 void Person::show() const {
    cout << "Person: " << surname << endl;
    cout << "Adress: " << address << endl;
    cout << "Phone number : " << phone << endl;
}

 void Person::edit() {
    cout << "New surname: ";
    cin >> surname;
    cout << "New adress: ";
    cin >> address;
    cout << "New phone: ";
    cin >> phone;
}