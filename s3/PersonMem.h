//
// Created by Василенко Павел on 23.09.2023.
//

#ifndef OOP_CPP_PERSONMEM_H
#define OOP_CPP_PERSONMEM_H

#include "iostream"
#include "string"

using std::string;
using std::cout;
using std::endl;

class PersonMem {

private:
    int* age;

public:
    PersonMem (int age)  {
        cout << "Person (int age):  " << age << endl;
        this->age = new int;
        *(this->age) = age;
    }

    PersonMem(const PersonMem& p) {
        age = new int;
        *age = *p.age;
    }

    int getAge() {
        // cout << "getAge()" << endl;
        return *age;
    }

    ~PersonMem() {
        cout << "~PersonMem(): destructor" << endl;
        delete age;
        cout << "destructor end" << endl;
    }
};


#endif //OOP_CPP_PERSONMEM_H
