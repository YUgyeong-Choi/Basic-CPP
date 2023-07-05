#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
	srand(time(NULL)); // rand함수는 srand함수에 의존적, srand의 seed값에 time(NULL)을 넣어줘야 실핼할때마다 랜덤 숫자 바뀜
	for (int i = 0; i < 5; i++) {
		printf("Random Number: %d\n", rand() % 100);
	}
	return 0;
}