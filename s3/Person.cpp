//
// Created by Василенко Павел on 23.09.2023.
//

#include "Person.h"

Person::Person(int age) : Person("", age) {
        cout << "Person (int age):  " << age << endl;
        counter++;
}

Person::Person(string name, int age)  {
    cout << "Person (string name, int age):  " << name << ", " << age << endl;
    this->name = name;
    this->age = age;
}

Person::Person(const Person &p) {
    cout << "Person(const Person& p) : " << p << endl;
    this->age = p.age;
    this->name = p.name;
}

Person::~Person() {
    cout << "~Person ()" << endl;
}

Person &Person::operator=(Person &person) {
    std::cout << "Person.operator=(Person&): " << person << endl;
    this->age = person.age;
    return *this;
}

bool Person::compare(Person *p) {
    std::cout << "Person.compare(Person): " << *p << endl;
    if (age != p->age) {
        return false;
    }

    if (name != p->name) {
        return false;
    }

    return true;
}

std::ostream &operator<<(std::ostream &ostream, const Person& person) {
    ostream << "{ Имя: " << person.name << ", Возраст: " << person.age << " }" << std::endl;
    return ostream;
}

void Person::setAge(int age) {
    Person::age = age;
}

void Person::setName(const string &name) {
    Person::name = name;
}

int Person::getAge() const {
    return age;
}

const string &Person::getName() const {
    return name;
}
