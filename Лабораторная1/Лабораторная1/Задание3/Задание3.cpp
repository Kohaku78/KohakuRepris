#include <iostream>
#include "stdafx.h"

int main() {
	int x = 10;
	int y = 3;
	int a;
	a = x - y;
	std::cout << "x-y=" << a << std::endl;
	std::cout << "5/2=" << 5 / 2 << std::endl;
	std::cout << "5/2=" << 5 / 2.0 << std::endl;
	std::cout << "x/y=" << x / y << std::endl;
	std::cout << "x/y=" << (double)x / y << std::endl;
	return 0;
}
