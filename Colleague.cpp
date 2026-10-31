//
// Created by Ольга on 27.10.2026.
//

#include "Colleague.h"

Colleague::Colleague(string org, string a, string p, string f, string c) {
    organization = org;
    address = a;
    phone = p;
    fax = f;
    contactPerson = c;
}

void Colleague::show() const {
    cout << "Colleague: " << endl;
    cout << "Organization: " << organization << endl;
    cout << "Adress: " << address << endl;
    cout << "Phone: " << phone << endl;
    cout << "Fax: " << fax << endl;
    cout << "Contact person: " << contactPerson << endl;
}

void Colleague::edit() {
    cout << "New organization: ";
    cin >> organization;
    cout << "New adress: ";
    cin >> address;
    cout << "New phone number: ";
    cin >> phone;
    cout << "New fax : ";
    cin >> fax;
    cout << "New contact person: ";
    cin >> contactPerson;
}
