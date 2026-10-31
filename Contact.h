//
// Created by Ольга on 27.10.2026.
//

#ifndef POLYMORPHISM_HW_CONTACT_CONTACT_H
#define POLYMORPHISM_HW_CONTACT_CONTACT_H
#include <iostream>
#include <string>
using namespace std;
class Contact {
public:
    virtual void show() const;
    virtual void edit();
};


#endif //POLYMORPHISM_HW_CONTACT_CONTACT_H
