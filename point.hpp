#ifndef POINT_CLASS
#define POINT_CLASS

class Point {
private:
    int x;
    int y;
public:
    Point(int _x, int _y) : x(_x), y(_y) { }
    int GetX() { return x; }
    int GetY() { return y; }
    void SetX(int _x) { x = _x; }
    void SetY(int _y) { y = _y; }

    void SetXY(int _x, int _y) {
        SetX(_x);
        SetY(_y);
    }
};

#endif
