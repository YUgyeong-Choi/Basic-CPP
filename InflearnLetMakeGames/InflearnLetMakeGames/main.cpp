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

	/*
	사칙연산자 : +, -, *, /, % 
	관계연산자 : >, >=, <, <=, ==, !=
	논리연산자 : AND(&&), OR(||), NOT(!)
	*/

	//true는 1, false는 0
	cout << "10 < 20 = " << (10 < 20) << endl;
	cout << "10 <= 20 = " << (10 <= 20) << endl;
	cout << "10 > 20 = " << (10 > 20) << endl;
	cout << "10 >= 20 = " << (10 >= 20) << endl;
	cout << "10 == 20 = " << (10 == 20) << endl;
	cout << "10 != 20 = " << (10 != 20) << endl;

	cout << "숫자를 입력하세요 : ";
	cin >> Number;

	cout << "10 ~ 20 = " << (10 <= Number && Number <= 20) << endl;

	/*
	진수 : 2진수, 8진수, 10진수, 16진수
	2진수 : 0 - 1
	8진수 : 0 - 7
	10진수 : 0 - 9
	16진수 : 0 - 9, 10 - 15 : a - f

	87을 2진수, 16진수로 변환해보자
	87 / 2 = 43 - 1
	43 / 2 = 21 - 1
	21 / 2 = 10 - 1
	10 / 2 = 5 -- 0
	5 / 2 = 2 --- 1
	2 / 2 = 1 --- 0
	가장 마지막에 나온 몫부터 역순으로 나머지 값들을 읽는다
	1010111

	10진수를 16진수로 변환하는 것 보다 2진수를 16진수로 하는 것이 더 쉽다
	1010111을 오른쪽으로부터 4자리씩 끊어서 계산한다
	
	0101 0111
	8421 8421

	16진수 57

	비트단위 논리 연산자 : 2진수 단위의 연산을 한다. 
	종류 : AND(&), OR(|), NOT(~), XOR(^)

	87 & 53 = 21
	87 : 1010111
	53 : 110101

	  1010111
	 &0110101
	  0010101
	 
	 16+4+1 = 21
	*/

	cout << "87 & 53 = " << (87 & 53) << endl;

	return 0;
}
