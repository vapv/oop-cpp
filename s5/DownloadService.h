//
// Created by Василенко Павел on 30.09.2023.
//

#ifndef GOOGLE_TESTS_DOWNLOADSERVICE_H
#define GOOGLE_TESTS_DOWNLOADSERVICE_H
#include "string"
#include "CacheService.h"

using std::string;

class DownloadService {
private:
    CacheService cacheService;
    string internalDownload(string url);
public:
    // возвращает ресурс в виде строки
    string download(string url);

    DownloadService(CacheService cacheService);
};


#endif //GOOGLE_TESTS_DOWNLOADSERVICE_H
