// #include : 헤더파일을 여기에 포함시키는 기능, 전처리기
#include <iostream>

using namespace std;

//실행 과정 : 컴파일 -> 빌드 -> 실행
//Ctrl + Shift + B 를 이용해서 컴파일 및 빌드 가능

int main() {
	//C++의 표준 기능의 대부분은 std라는 namespace 안에 존재하고 있다.
	//이름이 겹치는 것을 방지해주기 위해
	std::cout << "Test Output" << std::endl;

	cout << "std namespace 사용" << endl;

	/*
	변수 : 변하는 수
	변수는 주기억장체-메모리-램에 변수의 공간이 만들어 짐
	char, bool, short, int, float, double
	종류, 용량, 데이터, 표현 범위, unsigned
	*/

	int Number = 10;
	Number = 20;
	cout << Number << endl;

	bool bTest = true;
	bTest = false;
	cout << bTest << endl;

	//영문이나 숫자는 1byte를 차지한다.
	//하지만 한글, 한문등의 문자는 2byte를 차지하기 때문에 char에 저장하기 힘들다
	char cTest = 't';
	cout << cTest << endl;

	float fNumber = 3.14;
	cout << fNumber << endl;

	double dNumber = 123.4567;
	cout << dNumber << endl;

	return 0;
}
