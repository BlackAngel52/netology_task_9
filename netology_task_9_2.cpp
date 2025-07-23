#include <iostream>

void swap(int* a, int* b) {
	int temp{};
	temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int a{ 5 };
	int b{ 10 };
	int* ptrA = &a;
	int* ptrB = &b;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	swap(ptrA, ptrB);
	std::cout << "a = " << a << ", b = " << b << std::endl;

	return 0;
}
