//inline Ű���带 �̿��� �Լ��� �ζ���ȭ�� �����Ϸ��� ���ؼ� ó��
#include <iostream>

inline int SQUARE(int x) {
	return x * x;
}

int main() {
	std::cout << SQUARE(5) << std::endl; //std::cout << x+x<<std::endl; �̷� ����
	std::cout << SQUARE(12) << std::endl;
	return 0;
}