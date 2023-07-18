#include <string>

struct db {
    static std::string baseUrl() {
        return "https://v6.db.transport.rest/";
    }
    static std::string stations() {
        return baseUrl() + "stations/";
    }
};