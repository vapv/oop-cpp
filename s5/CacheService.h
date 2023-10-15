//
// Created by Василенко Павел on 07.10.2023.
//

#ifndef GOOGLE_TESTS_CACHESERVICE_H
#define GOOGLE_TESTS_CACHESERVICE_H


#include "string"
#include "vector"
using std::string;
using std::vector;

class CacheService {
private:
    int cachePeriod;
public:
    explicit CacheService(int cachePeriod);

    // закэшировать ресурс
    void cache(string data);

    // получить ресурс
    string* get(string url);
};


#endif //GOOGLE_TESTS_CACHESERVICE_H
