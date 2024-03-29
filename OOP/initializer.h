#include <iostream>

class Point {
private:
    int x;
    int y;

public:
    Point(int valueX, int valueY) {
        x = valueX;
        y = valueY;
    }

    bool operator==(const Point &other) {
        return this->x == other.x && this->y == other.y;
    }

    bool operator!=(const Point &other) {
        return this->x != other.x && this->y != other.y;
    }

    int GetX() {
        return x;
    }

    void SetX(int valueX) {
        x = valueX;
    }

    void SetY(int valueY) {
        y = valueY;
    }

    void Print() {
        std::cout << x << '\t' << y << '\n';
    }
};