//
// Created by Василенко Павел on 23.09.2023.
//

#ifndef OOP_CPP_SINGLETON_H
#define OOP_CPP_SINGLETON_H


class Singleton {

private:
    Singleton() {
    }
    static Singleton* instance;
    Singleton(const Singleton&);
    Singleton& operator=(const Singleton&);
    int value;
public:

    static Singleton* getInstance();

    int getValue() {
        return instance->value;
    }

    void setValue(int value) {
        instance->value = value;
    }

};

#endif //OOP_CPP_SINGLETON_H
