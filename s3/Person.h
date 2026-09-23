//
// Created by Василенко Павел on 23.09.2023.
//

#ifndef OOP_CPP_PERSON_H
#define OOP_CPP_PERSON_H
#include "iostream"
#include "string"

using std::string;
using std::cout;
using std::endl;

class Person {
private:
    int age;
    string name;

    static int counter;

public:
    Person (int age);

    Person(string name, int age);

    Person(const Person& p);

    ~Person();

    static int getCount() {
        return counter;
    }

    Person& operator=(Person& person);

    bool compare (Person *p);

    void setAge(int age);

    void setName(const string &name);

    int getAge() const;

    const string &getName() const;

    friend std::ostream& operator<<(std::ostream& ostream, const Person& mobile);
};


#endif //OOP_CPP_PERSON_H
