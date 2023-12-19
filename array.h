#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

class Array {
private:
    int* data;
    int size;

public:
    Array(int size);
    ~Array();

    int& operator[](int index);
    void operator()(int value);

    operator int() const;
    operator char* () const;

    friend std::ostream& operator<<(std::ostream& os, const Array& arr);
};

#endif 

