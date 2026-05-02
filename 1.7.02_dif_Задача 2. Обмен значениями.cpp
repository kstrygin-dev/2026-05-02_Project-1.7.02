#include <iostream>

void swap(int &a, int &b);

int main()
{
	int a = 5, b = 8;

	std::cout << "a = " << a << ',' << "b = " << b << std::endl;

	swap(a, b);

	std::cout << "a = " << a << ',' << "b = " << b << std::endl;

	return EXIT_SUCCESS;
}

void swap(int& a, int& b)
{

	a = a + b;		// a = 5, b = 8; тогда a = 13, b = 8
	b = a - b;		// 13 - 8 = 5? тогда b = 5 , a = 13
	a = a - b;
}
