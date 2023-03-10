/* Failure is what makes the code look better. */
/* 
 * FILE('s): .h
 * DATE&TIME: jan 19 2023  
 * CREATED_BY: Sean Jesky
 * CREATED_FOR: reading through a math textbook and thought why not
 * WHAT_IT_DOES: basic functions for points on a graph
*/

#define MATH_H
#ifdef MATH_H
#define NDEBUG
template<typename T> struct points
{
    T x2_cord = 0.0;
    T y2_cord = 0.0;
    //testing Git, practice for GIT
    //omg it worked, i have tasted the power of git
    //now i want to GIT ALL the THINGS
    T x_cord = 0.0;
    T y_cord = 0.0;

    T slope;
};

template<typename T> T slope(points<T>& Pts)
{
    T temp_y = Pts.y2_cord - Pts.y_cord;
    T temp_x = Pts.x2_cord - Pts.x_cord;
    Pts.slope = temp_y / temp_x;
    return Pts.slope;
}

template<typename T> T __b(points<T>& pts)
{
    T b = (pts.y2_cord - slope(pts)) * pts.x2_cord;
    return b;
}

template<typename T> T slope_intercept(points<T>& pts)
{
    return (slope(pts) * pts.x_cord) + __b(pts);
}
//placeholder, next to do
template<typename T> T point_slope_form(points<T> pts){


}

template<typename T> T distance(points<T>& pts)
{
    return (pts.y2_cord - pts.y_cord) - (pts.x2_cord - pts.x_cord);
}
//x and y hold mid-point after function is run.
template<typename T> void midpoint(points<T>& pts, T& Mx,  T& My)
{
    T mid_point_x = (pts.x_cord + pts.x2_cord) / 2;
    T mid_point_y = (pts.y_cord + pts.y2_cord) / 2;
    Mx = mid_point_x;
    My = mid_point_y;
}

#endif//
