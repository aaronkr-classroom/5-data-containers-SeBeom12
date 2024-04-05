
#include <iostream>
#include<iomanip>

int main() {
	for (double i = 1; i <= 100; i++) {
		std::cout << std::setw(10) << i << std::setw(10) << i * i << std::endl;


	}

	return 0;

}