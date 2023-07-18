//
// Created by mrtuxa on 7/18/23.
//

#include <iostream>
#include "../libs/transportpp/src/library.h"
#include "../libs/transportpp/src/include/transport.hpp"
int main() {
    std::cout << Transport().GetData(db::stations());

    return 0;
}