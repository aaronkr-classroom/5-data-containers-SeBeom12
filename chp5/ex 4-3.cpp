#include <iostream>
#include<iomanip>

//setw�� ���� �μ��� �ǹ��ϴ� ������ ���� �ܾ��� ������ ª������ ������ �����
int main() {
	for (int i = 1; i <= 1000; i++) {
		std::cout << std::setw(10) << i << std::setw(10) << i * i << std::endl;


	}

	return 0;

}

