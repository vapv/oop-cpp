#include <iostream>
#include "Mobile.h"
#include "FileReader.h"

int main() {
    // создаем объект класса
    FileReader fileReader("C://<путь до файла>");
    // открываем файл
    fileReader.open();

    // построчное считывание, пока не достигли конца файла
    while (fileReader.hasNext()) {
        string str = fileReader.next();
        /**
         * TODO: далее должна быть бизнес логика :
         *  1. распарсить строку на лексемы (Parser)
         *  2. обработать каждую лексему в статистике (StatisticStorage)
         *  3. записать строчки в CSV файл (CSVFileWriter)
         */

    }

    // сбросили указатель на начало
    fileReader.reset();

    // еще раз считали
    while (fileReader.hasNext()) {
        string str = fileReader.next();
    }

    // закрыли
    fileReader.close();
    return 0;
}
