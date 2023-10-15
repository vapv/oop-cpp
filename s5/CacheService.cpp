//
// Created by Василенко Павел on 07.10.2023.
//

#include "CacheService.h"

CacheService::CacheService(int cachePeriod) : cachePeriod(cachePeriod) {
    this->cachePeriod = cachePeriod;
}

string* CacheService::get(string url) {
    // логика по работе с кэшем
    // data
    // if (cachePeriod > data.
}
