#ifndef RIGHT_TRIANGLE_CLASS
#define RIGHT_TRIANGLE_CLASS

#include <iostream>
#include "point.hpp"
#include "shape.hpp"

using std::cout;
using std::endl;

class RightTriangle: public Shape {
private:
    // Point that has the right-angle.
    Point ra_point;
    int x_offset;
    int y_offset;
public:
    // Initialize a right-angled triangle. X-Y coordinates of the point that has
    // the right-angle is given. The other two points are located by its X and Y
    // coordinate offsets, respectively.
    RightTriangle(int ra_x, int ra_y, int x_off, int y_off)
        : ra_point(ra_x, ra_y), x_offset(x_off), y_offset(y_off)
    { }

    // Print out the three points that compose this triangle.
    void Print() {
        int ra_x = ra_point.GetX();
        int ra_y = ra_point.GetY();
        int second_point_y = ra_y + y_offset;
        int third_point_x = ra_x + x_offset;
        cout << "Point with right-angle: (" << ra_x << ", " << ra_y << ")\n";
        cout << "Second point: (" << ra_x << ", " << second_point_y << ")\n";
        cout << "Third point: (" << third_point_x << ", " << ra_y << ")\n";
    }

    // Shift the position of this triangle. Increase its x coordinate by
    // 'delta_x' and y coordinate by 'delta_y'. Negative values can be given as
    // arguments. If X or Y coordinate of any of the three points becomes
    // negative after the shift, don't shift it and just return false.
    bool Shift(int delta_x, int delta_y);

    // Increase the height and width of the triangle by twice, while fixing the
    // position of its point with the right-angle. If X or Y coordinate of any
    // of the three points becomes negative after the resizing, don't increase
    // the size and just return false.
    bool DoubleSize();

    // Rotate this triangle counterclockwise by 90 degree. Its point with the
    // right-angle must be the pivot of the rotation. If X or Y coordinate of
    // any of the three points becomes negative after the rotation, don't rotate
    // it and just return false.
    bool Rotate();
};

#endif
