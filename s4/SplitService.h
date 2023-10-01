//
// Created by Василенко Павел on 29.09.2023.
//

#ifndef GOOGLE_TESTS_SPLITSERVICE_H
#define GOOGLE_TESTS_SPLITSERVICE_H

#include "string"
#include "vector"
#include "regex"

using std::string;
using std::vector;

class SplitService {

public:

    string regexpPattern;

    SplitService() {
        regexpPattern = "\\w+";
    }

    vector<string> parse(const string& str);
};


#endif //GOOGLE_TESTS_SPLITSERVICE_H
