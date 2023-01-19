/* Failure is what makes the code look better. */
/* 
 * FILE('s): .h
 * DATE&TIME:
 * CREATED_BY:
 * CREATED_FOR:
 * WHAT_IT_DOES
*/

#define MATH_H
#ifdef MATH_H
template<typename T> struct points
{
    T x2_cord = 0.0;
    T y2_cord = 0.0;
    //...
    T x_cord = 0.0;
    T y_cord = 0.0;
    //...
    T slope;
};

template<typename T> T slope(points<T>& Pts)
{
    T temp_y = Pts.y_cord - Pts.y2_cord;
    T temp_x = Pts.x_cord - Pts.x2_cord;
    return temp_y / temp_x;
}

template<typename T> T y_intercept(points<T>& pts)
{
    T b = (pts.y2_cord - pts.slope) * pts.x2_cord;
    return b;
}

template<typename T> T slope_intercept(points<T>& pts)
{
    return (pts.slope * pts.x_cord) + y_intercept(pts);
}

template<typename T> T distance(points<T>& pts)
{
    return (pts.y2_cord - pts.y_cord) - (pts.x2_cord - pts.x_cord);
}
//x and y hold mid-point after function is run.
template<typename T> void midpoint(points<T>& pts, T& x,  T& y)
{
    T mid_point_x = (pts.x_cord + pts.x2_cord) / 2;
    T mid_point_y = (pts.y_cord + pts.y2_cord) / 2;
    x = mid_point_x;
    y = mid_point_y;
}

#endif//
