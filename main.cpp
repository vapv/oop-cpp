#include <iostream>
#include "s3/Person.h"
#include "s3/PersonMem.h"
#include "s3/Singleton.h"

void log(PersonMem p) {
    cout << "PersonMem logger : " << p.getAge() << endl;
}

int main() {

    Person p1(10, "John");
    Person p2(10, "John");
    cout << p1.compare(p2) << endl;

    Person p (10, "John");
    Person copy = p;

    PersonMem personMem(10);
    log(personMem);
    log(personMem);
    cout << personMem.getAge() << endl;

    // ошибка
    // Singleton singleton = new Singleton();

    Singleton *instance1 = Singleton::getInstance();
    instance1->setValue(10);

    Singleton *instance2 = Singleton::getInstance();
    cout << instance2->getValue() << endl;
}
