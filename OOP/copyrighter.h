#include <iostream>

class MyClass {
public:
    int *data;

    MyClass(int size) {
        this->Size = size;
        this->data = new int[size];
        for (int i = 0; i < size; i++) {
            data[i] = i;
        }
        std::cout << "Called constructor " << this << "with size " << size << '\n';
    };

    MyClass(const MyClass &other) {
        this->Size = other.Size;
        this->data = new int[other.Size];
        std::cout << "Was called copying constructor " << this << "with size " << this->Size << '\n';
        for (int i = 0; i < other.Size; i++) {
            this->data[i] = other.data[i];
        }
    }

    ~MyClass() {
        std::cout << "Destructor called " << this << '\n';
        delete[] data;
    }

private:
    int Size;
};

void Foo(MyClass value) {
    std::cout << "Called Function FOO" << "with size " << '\n';
}

MyClass Foo2() {
    std::cout << "Called function Foo_2" << '\n';
    MyClass temp(2);
    return temp;
}