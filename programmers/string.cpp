#include <iostream>
#include <vector>
#include <thread>

int main() {
    std::string s = "Hello";
    std::vector<char> c(s.begin(), s.end());

    for (auto value : c) {
        std::cout << value << "\n";
    }

    std::string a = "1335";
    std::string b = "1235";

    if ( a > b ) {
        std::cout<< "greater \n";
    } else {
        std::cout<< "less \n";
    }



    return 0;

}
