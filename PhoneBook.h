//
// Created by Ольга on 28.10.2026.
//

#ifndef POLYMORPHISM_HW_CONTACT_PHONEBOOK_H
#define POLYMORPHISM_HW_CONTACT_PHONEBOOK_H
#include "Contact.h"
#include "Colleague.h"
#include "Person.h"
#include "Friend.h"
#include <vector>
class PhoneBook {
public:
    vector<Contact*> contacts;

    void addContact();
    void showAll();
    void editContact();
    void deleteContact();
    void searchContact();

    ~PhoneBook();
};



#endif //POLYMORPHISM_HW_CONTACT_PHONEBOOK_H
