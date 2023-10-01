//
// Created by Василенко Павел on 29.09.2023.
//

#include "SplitService.h"

vector<string> SplitService::parse(const string &str) {

    vector<string> result;
    std::regex re(regexpPattern);

    std::sregex_token_iterator iter(str.begin(),
                                    str.end(), re);
    std::sregex_token_iterator end;

    while (iter != end) {
        if (iter->length()) {
            result.push_back(*iter);
        }
        ++iter;
    }
    return result;

}
