#include <iostream>
#include <unordered_map>

int main()
{
    std::unordered_map<std::string ,int> u_map;

    // insert
    u_map.insert(std::make_pair("kim", 2));
    u_map["jim"] = 4;


    // find 
    std::cout << u_map.find("kim")->second << std::endl;
    std::cout << u_map["jim"] << std::endl;


    // not found
    if (u_map.find("kin") == u_map.end()) {
        std::cout << "값이 없음" << std::endl;
    }

    // loop
    for (const auto &item : u_map) {
        std::cout << item.first << ":" << item.second << std::endl;
    }

    return 0;
}
