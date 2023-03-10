/* Failure is what makes the code look better. */
/* 
 * FILE('s): main.cpp
 * DATE&TIME:
 * CREATED_BY:
 * CREATED_FOR:
 * WHAT_IT_DOES
 */
#define NDEBUG
#include <iostream>
#include <cstdlib>
#include "math.h"
using std::cout;	using std::endl;
//..
int main(){
    points<double> pts;
    pts.x_cord = -2.22;
    pts.x2_cord = 1.25;
    
    pts.y_cord = -85.525;
    pts.y2_cord = 7.25;

    //calculate the slope:
    pts.slope = slope<double>(pts); 
    //print the slope:
    std::cout << pts.slope << '\n';

    //calculate for b
    double b = __b<double>(pts);
    std::cout << b << '\n';

    //idk what this equation actually does
    double intercept = slope_intercept<double>(pts);
    std::cout << intercept << '\n';
    
    //get distance between the two points
    double dist = distance<double>(pts);
    std::cout << dist << '\n';

    //calculate the midpoint's
    double Mx = 0.0;
    double My = 0.0;
    
    midpoint<double>(pts, Mx, My);
    std::cout << Mx << '\t' << My << '\n';
}
