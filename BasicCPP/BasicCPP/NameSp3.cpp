//동일한 이르몽간에 정의된 함수를 호출할 때는 이름공간을 명시할 필요가 없다
#include <iostream>

namespace BestComImpl {
	void SimpleFunc();
}

namespace BestComImpl {
	void PrettyFunc();
}
namespace ProgComImpl {
	void SimpleFunc();
}

int main() {
	BestComImpl::SimpleFunc();
	return 0;
}

void BestComImpl::SimpleFunc() {
	std::cout << "BestCom이 정의한 함수" << std::endl;
	PrettyFunc();
	ProgComImpl::SimpleFunc();
}

void BestComImpl::PrettyFunc() {
	std::cout << "So Pretty!!" << std::endl;
}

void ProgComImpl::SimpleFunc() {
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}
