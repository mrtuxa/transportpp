#include <string>

struct db {
    static std::string baseUrl() {
        return "https://v6.db.transport.rest/";
    }
    static std::string stations() {
        return baseUrl() + "stations/";
    }
    class stops {
        static std::string reachable_from(int latitude, int longtitude, std::string address) {
            return baseUrl() + "stops/reachable-from?latitude=" + std::to_string(latitude) + "&longtitude=" + std::to_string(longtitude) + "&address=" + address;
        }
    };
};