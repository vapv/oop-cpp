//
// Created by Василенко Павел on 30.09.2023.
//

#include "Vector.h"

int Vector::SIZE = 3;

Vector Vector::operator+(const Vector &vector) const {
    Vector result;
    for (int i = 0; i < 3; i++) {
        result.data[i] = this->data[i] + vector [i];
    }
    return result;
}


std::ostream &operator<<(std::ostream &stream,
                         const Vector &v) {
    for (int i = 0; i < 3; i++) {
        stream << v.data[i] << " ";
    }
    stream << std::endl;
    return stream;
}

int &Vector::operator[](int index) {
    return data[index];
}

Vector::Vector(int a, int b, int c) {
    data[0] = a;
    data[1] = b;
    data[2] = c;
}

bool Vector::operator==(const Vector &vector) const {
    for (int i = 0; i < SIZE; i++) {
        if (data[i] != vector[i])
            return false;
    }

    return true;
}

int Vector::operator[](int index) const {
    return data[index];
}

Vector Vector::sum(const Vector &v) const {
    Vector result;
    for (int i = 0; i < SIZE; i++) {
        result[i] = data[i] + v[i];
    }
    return result;
}

Vector operator+(int p, const Vector &v) {
    Vector result;
    for (int i = 0; i < Vector::SIZE; i++) {
        result[i] = p + v[i];
    }
    return result;
}
