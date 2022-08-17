#include<iostream>
#include<sstream>

int main() {
      // stringstream에 문자열 넣는 망법 1 (문자열로 입력)
      std::stringstream ss1("test 1 2 3 4 5");
      std::string str;

      // while(ss1 >> str)이란, 더 이상 str의 자료형에 맞는 정보가 없을 때까지
      // 계속 스트림에서 str으로 자료를 추출/복사하는 것이다. 끝에 도달하면 끝난다.
      while ( ss1 >> str ) {
              std::cout<< str <<std::endl;
      }

      // stringstream에 문자열 넣는 망법 2 (문자열 format 사용하여 입력)
      std::stringstream ss2;
      ss2 << "1" << ' ' << -1 << ' ' << 2 << 3;

      while ( ss2 >> str ) {
              std::cout<< str <<std::endl;
      }
 
      return 0;
}
