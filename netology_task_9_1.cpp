#include <iostream>

void print(int *arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    const int size1{ 5 };
    int arr1[size1]{1,2,3,4,5};
    print(arr1, size1);

    const int size2{ 3 };
    int arr2[size2]{ 6, 6, 6 };
    print(arr2, size2);

    const int size3{ 10 };
    int arr3[size3]{ 10, 8, 6, 4, 2, 1, 3, 5, 7, 9 };
    print(arr3, size3);

    return 0;
    
}


