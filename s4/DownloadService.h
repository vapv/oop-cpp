//
// Created by Василенко Павел on 30.09.2023.
//

#ifndef GOOGLE_TESTS_DOWNLOADSERVICE_H
#define GOOGLE_TESTS_DOWNLOADSERVICE_H
#include "string"

using std::string;

class DownloadService {
public:
    // возвращает путь до файла
    string download(string url);

private:
    string internalDownload(string url);
};


#endif //GOOGLE_TESTS_DOWNLOADSERVICE_H
