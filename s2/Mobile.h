//
// Created by Василенко Павел on 16.09.2023.
//

#ifndef OOP_CPP_MOBILE_H
#define OOP_CPP_MOBILE_H

#include "string"
#include "iostream"

using std::string;
using std::cout;

enum OperationSystem {
    IOS,
    ANDROID,
    HUAWEI
};

class Mobile {


private:
    string vendor;
    OperationSystem operationSystem;
    unsigned int chargeLevel;
    static const int CHARGE_FOR_CALL = 15;

public:
    Mobile(string vendor, OperationSystem os) : vendor(vendor), operationSystem(operationSystem) {

        // this->operationSystem = operationSystem;

        cout << "Конструктор Mobile(os, vendor). " << toString() << std::endl;
        chargeLevel = 100;
    };

    ~Mobile() {
        cout << "Деструктор ~Mobile(). " << toString() << std::endl;
    }

    string toString() {
        return "vendor = " + vendor + ", os = " + ( operationSystem == IOS ? "IOS" :
                                                    (operationSystem == ANDROID ? "ANDROID" : "HUAWEI"));
    }

    int getChargeLevel() const {
        return chargeLevel;
    }

    void charge() {
        cout << "Зарядка телефона.." << std::endl;
        // timeout по времени
        this->chargeLevel = 100;
    }
//
    void call();

};




/**
// пример кода запуска
Mobile samsung("samsung", ANDROID);
for (int i = 0; i < 10; i++) {
    try {
        samsung.call();
    } catch (string s) {
        cout << "Ошибка: " << s << std::endl;
        samsung.charge();
        continue;
    }
}
 */


#endif //OOP_CPP_MOBILE_H
