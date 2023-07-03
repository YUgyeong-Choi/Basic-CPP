//inline 키워드를 이용한 함수의 인라인화는 컴파일러에 의해서 처리
#include <iostream>

inline int SQUARE(int x) {
	return x * x;
}

int main() {
	std::cout << SQUARE(5) << std::endl; //std::cout << x+x<<std::endl; 이런 형태
	std::cout << SQUARE(12) << std::endl;
	return 0;
}