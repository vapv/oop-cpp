//
// Created by Василенко Павел on 16.09.2023.
//

#include "Mobile.h"
#include <chrono>
#include <thread>

void Mobile::call(string number) {

    cout << "вызов метода call(" << number << ")" << std::endl;

    if (chargeLevel < CHARGE_FOR_CALL) {
        cout << "недостаточно энергии для совершения звонка";
        throw string("недостаточно энергии");
    }

    cout << "звонок на номер " << number << std::endl;
    this->chargeLevel -= CHARGE_FOR_CALL;
}

void Mobile::charge() {
    using namespace std::chrono_literals;
    cout << "Зарядка телефона";

    while (chargeLevel < 100) {
        std::this_thread::sleep_for(1s);
        cout << ".";
        chargeLevel += 10;
    }

    if (chargeLevel > 100 ) chargeLevel = 100;

    cout << std::endl;
}

int Mobile::getChargeLevel() const {
    return chargeLevel;
}

Mobile::Mobile(string vendor, OperationSystem os) : vendor(vendor), operationSystem(os) {
    cout << "Конструктор Mobile(" << vendor << ", " << os << ");" << std::endl;
    chargeLevel = 100;
}

Mobile::~Mobile() {
    cout << "Деструктор ~Mobile(). " << toString() << std::endl;
}

string Mobile::toString() const {
    return "vendor = " + vendor + ", os = " + ( operationSystem == IOS ? "IOS" :
                                                (operationSystem == ANDROID ? "ANDROID" : "HUAWEI"));
}

/**
 *  Переопределение оператора вывода для объектов класса.
 * @param ostream поток вывода
 * @param mobile объект
 * @return поток вывода
 */
std::ostream& operator<<(std::ostream& ostream, const Mobile& m) {
    ostream << "Производитель: " << m.vendor << ", ОС: " << m.operationSystem << std::endl;
    return ostream;
}
