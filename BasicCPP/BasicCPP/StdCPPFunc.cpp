//C����� ǥ���Լ��� ����ϰ� ������ �տ� c�� ���ϰ� .h�� ����
#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdio>
#include <cstring>
using namespace std;

int main(void) {
	char str1[] = "Result";
	char str2[30];

	strcpy(str2, str1);
	printf("%s: %f \n", str1, sin(0.14));
	printf("%s: %f \n", str2, abs(-1.25));
	return 0;
}