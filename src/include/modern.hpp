#include <string>
#include <sstream>

inline std::string int_to_string(int integer) {
    std::stringstream stringstream;

    stringstream << integer;
    return stringstream.str();
}

inline std::string bool_to_string(bool value) {
    return value ? "true" : "false";
}

inline std::string long_to_string(long value) {
    std::stringstream ss;
    ss << value;
    return ss.str();
}