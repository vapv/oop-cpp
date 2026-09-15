//
// Created by Василенко Павел on 16.09.2023.
//

#ifndef OOP_CPP_FILEREADER_H
#define OOP_CPP_FILEREADER_H

#include "string"
#include "iostream"

using std::string;
using std::ifstream;
/**
 * Компонент для построчного чтения файла.
 */
class FileReader {
private:
    string filename;
    ifstream* f;
public:

    /**
     * Конструктор
     * @param filePath путь до файла
     */
    FileReader(string filePath);

    /**
     * Открыть файл на чтение.
     */
    void open();

    /**
     * Прочитать следующую строчку
     * @return следуюзщая строчка из файла
     */
    string next();

    /**
     * Проверяет указывает ли каретка на последнюю строчку в файле.
     * @return <code>true</code> если есть строчка для чтения, <code>false</code> иначе
     */
    bool hasNext();

    /**
     * Закрывает файл.
     */
    void close();

    /**
     * Вернуть каретку на начало файла.
     */
    void reset();


};


#endif //OOP_CPP_FILEREADER_H
