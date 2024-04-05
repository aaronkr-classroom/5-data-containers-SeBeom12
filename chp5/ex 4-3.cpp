#include <iostream>
#include<iomanip>

//setw의 안의 인수가 의미하는 공백의 수가 단어의 수보다 짧아지면 공백이 사라짐
int main() {
	for (int i = 1; i <= 1000; i++) {
		std::cout << std::setw(10) << i << std::setw(10) << i * i << std::endl;


	}

	return 0;

}

