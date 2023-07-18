#ifndef TRANSPORTPP_LIBRARY_H
#define TRANSPORTPP_LIBRARY_H

#include <string>

class Transport {
public:
    std::string GetData(const std::string& url);
};
#endif //TRANSPORTPP_LIBRARY_H
