#include "array.h"

Array::Array(int size) : size(size) {
    data = new int[size];
}

Array::~Array() {
    delete[] data;
}

int& Array::operator[](int index) {
    if (index >= 0 && index < size) {
        return data[index];
    }
    else {
        std::cerr << "Error: Index out of bounds." << std::endl;
        exit(1);
    }
}

void Array::operator()(int value) {
    for (int i = 0; i < size; ++i) {
        data[i] += value;
    }
}

Array::operator int() const {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += data[i];
    }
    return sum;
}

Array::operator char* () const {
    char* str = new char[size * 2 + 1];
    for (int i = 0; i < size; ++i) {
        str[i * 2] = '0' + data[i];
        str[i * 2 + 1] = ' ';
    }
    str[size * 2] = '\0';
    return str;
}

std::ostream& operator<<(std::ostream& os, const Array& arr) {
    for (int i = 0; i < arr.size; ++i) {
        os << arr.data[i] << " ";
    }
    return os;
}
