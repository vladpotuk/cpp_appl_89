#include "array.h"

int main() {
    const int size = 5;
    Array arr(size);

    for (int i = 0; i < size; ++i) {
        arr[i] = i + 1;
    }

    std::cout << "Original array: " << arr << std::endl;

    
    std::cout << "Element at index 2: " << arr[2] << std::endl;

    
    arr(2);
    std::cout << "Array after adding 2 to all elements: " << arr << std::endl;

    
    int sum = static_cast<int>(arr);
    std::cout << "Sum of array elements: " << sum << std::endl;

    
    char* str = static_cast<char*>(arr);
    std::cout << "Array elements as a string: " << str << std::endl;

    delete[] str; 

    return 0;
}
