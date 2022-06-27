#include<string>
#include<vector>

//풀이 원리 숫자를 %2로 나눈다.

std::string solution(int num) {
    std::string answer = "";
    if (num == 0) {
        answer = "Even";
    } else if (num %2 == 0) {
        answer = "Even";
    } else {
        answer = "Odd";
    }
    return answer;
}

int main() 
{
    solution(10);

    return 0;
}

