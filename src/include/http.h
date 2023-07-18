#ifndef HTTP_H
#define HTTP_H

#include <string>

class HttpClient {
public:
    static std::string get(const std::string& url);
};

#endif