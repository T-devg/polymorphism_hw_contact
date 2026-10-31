//
// Created by Ольга on 28.10.2026.
//

#include "PhoneBook.h"
 void PhoneBook::addContact() {
  int type;
  cout << "1.Person" << endl;
  cout << "2.Colleague" << endl;
  cout << "3.Friend" << endl;
  cout << "Your choice: ";
  cin >> type;
if (type == 1) {
 string surname,address,phone;

  cout << "Surname: ";
  cin >> surname;
  cout << "Address: ";
  cin >> address;
 cout << "Phone: ";
 cin >> phone;

  contacts.push_back(new Person(surname,address,phone));
 cout << "Person added!" << endl;

}
  else if (type == 2) {
   string organization,address,phone,fax,contactPerson;
   cout << "Organization: ";
   cin >> organization;
   cout << "Address: ";
   cin >> address;
   cout << "Phone: ";
   cin >> phone;
   cout << "Fax: ";
   cin >> fax;
   cout << "Contact person: ";
   cin >> contactPerson;
   contacts.push_back(new Colleague(organization,
    address,phone,fax,contactPerson));
   cout << "Colleague added!" << endl;
  }
  else if (type == 3) {
   string surname,address,phone;
   Date birthDate;
   cout << "Surname: ";
   cin >> surname;
   cout << "Adress: ";
   cin >> address;
   cout << "Phone: ";
   cin >> phone;
   cout << "Birth date: ";
   cin >> birthDate;
   contacts.push_back(new Friend(surname,address,phone,birthDate));
   cout << "Friend added!" << endl;
  }
  else {
   cout << "Inccorect input! " << endl;
  }
}

 void PhoneBook::showAll() {
  for (int i =0; i < contacts.size();i++) {
   cout << "\nContact: " << i + 1 << endl;
   contacts[i]->show();
  }
}

 void PhoneBook::editContact() {
  showAll();

  int number;
  cout << "Number to edit: ";
  cin >> number;
  if (number >= 1 && number <= contacts.size()) {
   contacts[number - 1]->edit();
  }
  else {
   cout << "Contact is not found!" << endl;
  }

}

 void PhoneBook::deleteContact() {
  showAll();

  int number;
  cout << "Number to delete: ";
  cin >> number;

  if (number >= 1 && number <= contacts.size()) {
   delete contacts[number - 1];

   contacts.erase(contacts.begin() + number - 1);

   cout << "Contact is deleted!" << endl;
  }
  else {
   cout << "Contact is not found!" << endl;
  }
}


void PhoneBook::searchContact() {
  string search;

  cout << "Enter surname, phone or address: ";
  cin >> search;

  bool found = false;
  for (int i = 0; i < contacts.size(); i++) {
   Person* p = dynamic_cast<Person*>(contacts[i]);
   if (p != nullptr) {
    if (p->surname == search ||
        p->phone == search ||
        p->address == search) {

     p->show();
     found = true;
        }
   }

   Friend* f = dynamic_cast<Friend*>(contacts[i]);

   if (f != nullptr) {
    if (f->surname == search ||
        f->phone == search ||
        f->address == search) {

     f->show();
     found = true;
        }
   }

   Colleague* c = dynamic_cast<Colleague*>(contacts[i]);

   if (c != nullptr) {
    if (c->phone == search ||
        c->address == search) {

     c->show();
     found = true;
        }
   }
  }

  if (found == false) {
   cout << "Contact not found!" << endl;
  }
 }

PhoneBook::~PhoneBook() {
  for (int i = 0; i < contacts.size(); i++) {
   delete contacts[i];
  }
 }



