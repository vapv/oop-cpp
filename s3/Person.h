//
// Created by Василенко Павел on 23.09.2023.
//

#ifndef OOP_CPP_PERSON_H
#define OOP_CPP_PERSON_H
#include "iostream"
#include "string"

using std::string;
using std::cout, std::endl;

class Person {
private:
    int age;
    string name;
    static int counter;

public:
    Person (int age) : age(age) {
        cout << "Person (int age):  " << age << endl;
        counter++;
    }

    Person (int age, string name) : age(age), name(name) {
        cout << "Person (int age, string name):  " << age << endl;
    }

    Person(const Person& p) {
        cout << "Person(const Person& p) : copy constructor" << endl;
        this->age = p.age;
        this->name = p.name;
    }

    ~Person() {
        cout << "~Person ():  " << endl;
    }

    static int getCount() {
        return counter;
    }


    Person& operator=(Person& person) {
        std::cout << "Person.operator=(Person&) :" << endl;
        this->age = person.age;
        return *this;
    }

    bool compare (Person p) {
        if (age != p.age) {
            return false;
        }

        if (name != p.name) {
            return false;
        }

        return true;
    }
/**
Person (int age) {
 this->age = age;
}

**/
};


#endif //OOP_CPP_PERSON_H
