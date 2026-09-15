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
    /**
     * Конструктор
     * @param vendor - марка мобильного телефона
     * @param os - операционная система
     */
    Mobile(string vendor, OperationSystem os);;

    /**
     * Деструктор
     */
    ~Mobile();

    /**
     * Представление объекта в виде строки
     * @return
     */
    string toString() const;

    /**
     * Получить текущий уровень зарядки
     * @return уровень зарядки
     */
    int getChargeLevel() const;

    /**
     * Зарядить телефон до полного заряда.
     */
    void charge();

    /**
     * Совершить звонок по номеру.
     * @param number
     */
    void call(string number);

    friend std::ostream& operator<<(std::ostream& ostream, const Mobile& mobile);
};

#endif //OOP_CPP_MOBILE_H
