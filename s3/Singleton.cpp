//
// Created by Василенко Павел on 23.09.2023.
//

#include "Singleton.h"
Singleton* Singleton::instance = nullptr;

Singleton* Singleton::getInstance() {
    if (!instance) {
        instance = new Singleton();
    }
    return instance;
}
