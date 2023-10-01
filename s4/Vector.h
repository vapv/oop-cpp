//
// Created by Василенко Павел on 30.09.2023.
//

#ifndef GOOGLE_TESTS_VECTOR_H
#define GOOGLE_TESTS_VECTOR_H

#include "iostream"

class Vector {

private:
    int data[3];

public:
    static int SIZE;

    Vector() {
        data[0] = 0;
        data[1] = 0;
        data[2] = 0;
    }

    Vector(int a, int b, int c);

    // vector r = 1 + v; // 1.operatpr
    Vector operator+(const Vector &vector) const; // this.operator+(vector)

    Vector sum(const Vector &v) const;

    // boolean r = v1 == v2; r = v1.operator++(v2);
    bool operator==(const Vector &vector) const;

    // префиксная ++v -> v.operator++();
    Vector &operator++();

    // постфиксная v++;
    Vector operator++(int) const;

    int &operator[](int index);

    int operator[](int index) const;

    friend Vector operator+(int p, const Vector &v);

    friend std::ostream &operator<<(std::ostream &out, const Vector &v);
};





#endif //GOOGLE_TESTS_VECTOR_H
