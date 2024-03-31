#ifndef INC_100PROBLEMS_STRING_H
#define INC_100PROBLEMS_STRING_H

#include <iostream>
#include <cstring>

class MyString {
public:
    MyString() {
        str = nullptr;
    }

    MyString(char *str) {
        int length = strlen(str);
        this->str = new char[length + 1];
        for (int i = 0; i < length; i++) {
            this->str[i] = str[i];
        }
        this->str[length] = '\0';
    }


    MyString &operator=(const MyString &other) {
        if (this->str != nullptr) {
            delete[] this->str;
        }
        int length = strlen(other.str);
        this->str = new char[length + 1];
        for (int i = 0; i < length; i++) {
            this->str[i] = other.str[i];
        }
        this->str[length] = '\0';
        return *this;
    }

    MyString& operator+=(const MyString& other) {
        int thisLength = strlen(this->str);
        int otherLength = strlen(other.str);
        int newLength = thisLength + otherLength;
        char* tempStr = new char[newLength + 1];

        for (int i = 0; i < thisLength; i++) {
            tempStr[i] = this->str[i];
        }

        for (int i = 0; i < otherLength; i++) {
            tempStr[thisLength + i] = other.str[i];
        }

        tempStr[newLength] = '\0';
        delete[] this->str;
        this->str = tempStr;

        return *this;
    }


    MyString &operator+(const MyString &other) {
        MyString newStr;
        int length = strlen(this->str) + strlen(other.str);
        newStr.str = new char[length + 1];
        int i = 0;
        for (; i < strlen(this->str); i++) {
            newStr.str[i] = this->str[i];
        }
        for (int j = 0; j < strlen(other.str); j++, i++) {
            newStr.str[i] = other.str[j];
        }
        newStr.str[length] = '\0';

        return newStr;
    }

    void Print() {
        std::cout << this->str << '\n';
    }

    ~MyString() {
        delete[] this->str;
    }

private:
    char *str;
};


#endif //INC_100PROBLEMS_STRING_H
