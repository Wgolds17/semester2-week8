
#include <stdio.h>
#include <stdbool.h>

#include "shapes.h"

int main( void ) {

    Point p1 = makePoint(0.0,0.0);
    Point p2 = makePoint(5.4,6.9);
    Point p3 = makePoint(10.2,20.5);
    Point p4 = makePoint(6.0,9.0);

    Triangle t1 = makeTriangle(p1,p2,p3);

    Line l1 = makeLine(p2,p4);

    printf("%b", pointInLine(p2,l1));
    
    // test your code by calling the functions and printing the output 
    
    return 0;
}