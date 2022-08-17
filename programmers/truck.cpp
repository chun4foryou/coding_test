#include <string>
#include <vector>
#include <stack>
#include <iostream>
#include <deque>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    
    /*
    10분에 종료.
    결론 : 모든 트럭이 다리를 건너는 시간 구하기
    다리에 올라갈쑤 있는 차 : 다리 길이 만큼, 단 완전히 안올라 간건 빠진다. 
    10키로 : 
    length <= 다리 사이즈 
    
    2 대가 2
    [][]
    1대가 지나는 시간은 length + 1 
    한번에 못올리때 마다 1초씩 늘어난다.
    1. 차가 다릴 건널수있는 경우
       현재 달이 길이 >= 건너려는 트럭
       다리 하중 >= 건너려는 트럭 하중
    2, 
    */

    7,4,,5,6
    uint32_t current_weight = 0;
    std::deque<int> q;
    for (int i = 0; i < truck_weights.size(); answer++) {
        // 진입 조건
        std::cout<< ": truck_weights[i] " << truck_weights[i]  << std::endl;
        if (weight >= current_weight + truck_weights[i] && bridge_length >= q.size() + 1) {
            std::cout<< "insert" << std::endl;
            current_weight += truck_weights[i];    
            q.push_back(truck_weights[i]);
            i++;
        } else {
            if (!q.empty()) {
                current_weight -= q.front();
                q.pop_front();
                std::cout<< "delete"<< std::endl;
            }
        }
    }
    answer += bridge_length;

    return answer;
}

int main()
{
    std::vector<int> t = {7,4,5,6};
    std::vector<int> t1 = {10};
    std::vector<int> t2 = {10,10,10, 10,10,10,10,10,10,10};
//    std::cout << solution(2,10,t) << std::endl;
//    std::cout << solution(100,100,t1) << std::endl;
    std::cout << solution(100,100,t2) << std::endl;

}
