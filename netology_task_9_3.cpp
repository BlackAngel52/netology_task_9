#include <iostream>

void reverse(int *arr, int size) {
	int temp{};

	for (int i = 0; i < size / 2; ++i) {
		temp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = temp;
	}

}

void print(int* arr, int size) {
	for (int i = 0; i < size; ++i) {
		std::cout << arr[i] << " ";
	}
}

int main() {

	int size{};
	std::cout << "Enter array size" << std::endl;
	std::cin >> size;


	int* arr = new int[size];
	for (int i = 0; i < size; ++i) {
		arr[i] = i;
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	reverse(arr, size);
	print(arr, size);

	delete[] arr;

	return 0;
}