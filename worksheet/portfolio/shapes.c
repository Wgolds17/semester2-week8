
#include <stdbool.h>
#include <math.h>

#include "shapes.h"

Point makePoint( float x, float y ) {
    Point p;
    // implementation
    p.x = x;
    p.y = y;
    return p;
}

Line makeLine( Point p1, Point p2 ) {
    Line l;
    l.p[0] = p1;
    l.p[1] = p2;
    return l;
}

Triangle makeTriangle( Point p1, Point p2, Point p3 ) {
    Triangle t;
    t.p[0] = p1;
    t.p[1] = p2;
    t.p[2] = p3;
    return t;
}

// Use pythagoras, square root of the sum of the two lines squared
float lineLength( Line l ) {
    return sqrt((fabs(l.p[1].y - l.p[0].y) * fabs(l.p[1].y - l.p[0].y)) + (fabs(l.p[1].x - l.p[0].x) * fabs(l.p[1].x - l.p[0].x)));
}

float triangleArea( Triangle t) {
    return (0.5 * fabs(t.p[0].x * (t.p[1].y - t.p[2].y) + t.p[1].x * (t.p[2].y - t.p[0].y) + t.p[2].x * (t.p[0].y - t.p[1].y)));
}

// complete other functions below
// - start with stubs as above
// - compile regularly to test syntax
// - test functions by calling them from main()

bool samePoint( Point p1, Point p2 ) {
    bool xCoord = p1.x==p2.x;
    bool yCoord = p1.y==p2.y;
    return (yCoord && xCoord);

    float diffx = fabs(p1.x - p2.x);
    float diffy = fabs(p1.y - p2.y);

    // Validates to a certain degree of accuracy
    if ((diffx<1.0e-6) && (diffy<1.0e-6)){
        return true;
    }
    else{
        return false;
    }
}

bool pointInLine( Point p, Line l) {
    bool lineCheck1 = samePoint(p, l.p[0]);
    bool lineCheck2 = samePoint(p, l.p[1]);

    return (lineCheck1 || lineCheck2);   
}   

bool pointInTriangle( Point p, Triangle t ) {
    bool lineCheck1 = samePoint(p, t.p[0]);
    bool lineCheck2 = samePoint(p, t.p[1]);
    bool lineCheck3 = samePoint(p, t.p[2]);

    return (lineCheck1 || lineCheck2 || lineCheck3); 
}