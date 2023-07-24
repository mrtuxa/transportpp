#include <string>
#include "../transport.hpp"

static std::string stations(std::string query) {
    return db::baseUrl() + "stations?query=" + query;
}
static std::string stations(std::string query, int _limit) {
    std::string limit = int_to_string(_limit);

    return db::baseUrl() + "stations?query=" + query + "&limit=" + limit;
}
static std::string stations(std::string query, int _limit, bool _fuzzy, bool _autocomplete) {
    std::string limit = int_to_string(_limit);
    std::string fuzzy = bool_to_string(_fuzzy);
    std::string autocomplete = bool_to_string(_autocomplete);
    return db::baseUrl() + "stations?query=" + query + "&limit=" + limit + "&fuzzy=" + fuzzy + "&autocomplete=" + autocomplete;
}
static std::string stations(std::string query, int _limit, bool _fuzzy) {
    std::string limit = int_to_string(_limit);
    std::string fuzzy = bool_to_string(_fuzzy);
    return db::baseUrl() + "stations?query=" + query + "&limit=" + limit + "&fuzzy=" + fuzzy;
}