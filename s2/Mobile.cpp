//
// Created by Василенко Павел on 16.09.2023.
//

#include "Mobile.h"

void Mobile::call() {

    cout << "вызов метода call()" << std::endl;
    if (chargeLevel < CHARGE_FOR_CALL) {
        throw string("insufficient energy");
    }
    cout << "звонок.." << std::endl;
    this->chargeLevel -= CHARGE_FOR_CALL;
}
