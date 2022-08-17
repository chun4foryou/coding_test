#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    
    /*
    1. 기능이 100일때 서비스에 반영 
    2. 뒤에 있는 기능이 앞에 있는 기능보다 먼저 개바 될수 있음
    3. 뒤에 있는 기능은 앞에 있는 기능이 완성 될때 같이 배포됨. 
    4. 배포 순서대로 작업 진도가 적힌 배열(progresses)
    5. 작업의 속도가 적인 배열 (speeds)
    결과 : 각 배포마다 몇개의 기능이 배포되는지를 retrun 
    
    []
    []
    */
    /*
    스택에 거꾸로 넣는다.
    speed를 하루 마다 계산한다. 
    stack의 첫번째와 speed를 비교한다. 그리고 합이 100이상이면 빼낸다.
    */
    std::stack<int> prog, sp;
    
    
    for (auto it = progresses.rbegin(); it != progresses.rend(); ++it)
    {
        prog.push(*it);
    }
    
    for (auto it = speeds.rbegin(); it != speeds.rend(); ++it)
    {
        sp.push(*it);
    }

    

    int day = 1, count = 0; 
    
    for (int i = 0; i < 9 ; i++) {
        if (0 == prog.size() || 0 == sp.size()) {
            break;
        }
        std::cout << "day : " << day;
        std::cout << ", prog : " << prog.size() ;
        std::cout << ", sp : " << sp.size() << std::endl;
        count = 0;
        while (1) {
            std::cout << (prog.top() + (day * sp.top())) << std::endl;
            if (100 <= (prog.top() + (day * sp.top()))) {
                prog.pop();
                sp.pop();
                count++;
                std::cout << "OK !! POP" << std::endl;
            } else {
                break;
            }
        }
        std::cout << "POP : " << count  << std::endl;
        day++;
        answer.push_back(count);
    }
    
    return answer;
}

int main()
{
    std::vector<int> v = {93, 30, 55};
    std::vector<int> p = {1,30,5};

    solution(v,p);


}
