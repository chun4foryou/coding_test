#include <iostream>
#include <algorithm>
#include <vector>

bool comp(int a, int b) {
    return a < b;
}

int main() {
    std::vector<int> v = {5,3,2,4,7};

    sort(v.begin(), v.end(), comp);

    for (auto i : v) {
        std::cout << i << std::endl;
    }
    return 0;
}
