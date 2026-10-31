//
// Created by Ольга on 27.10.2026.
//

#ifndef POLYMORPHISM_HW_CONTACT_COLLEAGUE_H
#define POLYMORPHISM_HW_CONTACT_COLLEAGUE_H
#include "Contact.h"
class Colleague:public Contact{
public:
    string organization;
    string address;
    string phone;
    string fax;
    string contactPerson;
    Colleague(string org, string a, string p, string f, string c);

    void show() const override;
    void edit() override;
};


#endif //POLYMORPHISM_HW_CONTACT_COLLEAGUE_H
