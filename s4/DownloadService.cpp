//
// Created by Василенко Павел on 30.09.2023.
//

#include "DownloadService.h"

string DownloadService::download(string url) {
    if (url.empty()) {
        throw "error";
    }

    try {
        string result = internalDownload(url);
    } catch (string error)
    {

    } catch (int i)
    {

    }

    // реальное скачивание здесь


    return "link-to-file";
}

/**
 *
 * @param url
 * @return
 *
 * incorrect-link-error - неправильная ссылка
 * domain-not-existed-error - некорректный домен
 *
 */
string DownloadService::internalDownload(string url) {

    // открытие сокета по ip адресу
    /**
     * https://domain:port/link-to-file
     * возможные проблемы
     * 1. некорректная ссылка
     * 2. несуществующий домен
     * 3. несуществующий ip
     * 4. закрыт порт 443, 80
     */

    // загрузка файла
    /**
     * возможные ошибки:
     * 1. Прервалось соединение
     * 2. Нехватка дискового пространства
     */

    return "link-to-file";
}
