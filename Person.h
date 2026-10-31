//
// Created by Ольга on 27.10.2026.
//

#ifndef POLYMORPHISM_HW_CONTACT_PERSON_H
#define POLYMORPHISM_HW_CONTACT_PERSON_H
#include "Contact.h"
class Person:public Contact{
public:
    string surname;
    string address;
    string phone;
    Person(string surname, string address, string phone);

    void show() const override;
    void edit() override;
};



#endif //POLYMORPHISM_HW_CONTACT_PERSON_H
