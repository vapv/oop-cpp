#include <iostream>
#include "Person.h"

int Person::counter = 0;

int main() {
    Person p1("abc", 10);
    Person p2("abc", 10);

    cout << p1.compare(&p2) << endl;
}
