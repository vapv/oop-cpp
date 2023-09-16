//
// Created by Василенко Павел on 16.09.2023.
//

#ifndef OOP_CPP_FILEREADER_H
#define OOP_CPP_FILEREADER_H

#include "string"
#include "iostream"

using std::string;
using std::ifstream;
// Чтение файла построчно
class FileReader {
private:
    string filename;
    ifstream* f;
public:
    FileReader(string filename);

    // открыть файл
    void open();

    // дай след. строчку
    string next();

    // есть ли еще данные для считывания
    bool hasNext();

    // закрыть файл
    void close();

    // вернуть в начало
    void reset();


};


#endif //OOP_CPP_FILEREADER_H
