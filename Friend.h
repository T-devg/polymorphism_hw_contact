//
// Created by Ольга on 28.10.2026.
//

#ifndef POLYMORPHISM_HW_CONTACT_FRIEND_H
#define POLYMORPHISM_HW_CONTACT_FRIEND_H
#include "Contact.h"
#include "Date.h"
class Friend:public Contact{
public:
    string surname;
    string address;
    string phone;
    Date birthDate;
    Friend(string surname, string address, string phone,Date birthday);

    void show() const override;
    void edit() override;
};


#endif //POLYMORPHISM_HW_CONTACT_FRIEND_H
