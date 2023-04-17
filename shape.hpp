#ifndef SHAPE_CLASS
#define SHAPE_CLASS

class Shape {
public:
    virtual void Print() = 0;
    virtual bool Shift(int delta_x, int delta_y) = 0;
    virtual bool DoubleSize() = 0;
    virtual bool Rotate() = 0;
};

#endif
