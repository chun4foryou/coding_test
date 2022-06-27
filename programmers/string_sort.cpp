//#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>
#include <sstream>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<char> up;
    vector<char> lower;
    
    for(int i = 0; i < s.length(); i++) {
        if (isupper(s[i])) {
            //std::cout<< "대문자" << s[i] << std::endl;
            up.push_back(s[i]);
            sort(up.begin(), up.end(), greater<>());
        } else {
            //std::cout<< "소문자" << s[i] << std::endl;
            lower.push_back(s[i]);
            sort(lower.begin(), lower.end(), greater<>());
        }
    }
    
    std::ostringstream oss;
     for (const auto &it : lower) {
        oss << it;
    }   
    for (const auto &it : up) {
        oss << it;
    }

    
    //std::cout << oss.str() << std::endl;
    answer = oss.str();
    return answer;
}

int main ()
{
    solution("aaaaaz");
}


