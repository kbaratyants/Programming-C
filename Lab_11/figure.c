#include <stdio.h>
#include "figure.h"
#include <math.h>

double square(struct figure triangle) {
    int a = sqrt(pow(triangle.X1 - triangle.X2, 2) + pow(triangle.Y1 - triangle.Y2, 2));
    int b = sqrt(pow(triangle.X1 - triangle.X3, 2) + pow(triangle.Y1 - triangle.Y3, 2));
    int c = sqrt(pow(triangle.X2 - triangle.X3, 2) + pow(triangle.Y2 - triangle.Y3, 2));
    int p = (a + b + c)/2;
    return sqrt(p * (p-a) * (p-b) * (p-c));
}

double perimeter(struct figure triangle) {
    int a = sqrt(pow(triangle.X1 - triangle.X2, 2) + pow(triangle.Y1 - triangle.Y2, 2));
    int b = sqrt(pow(triangle.X1 - triangle.X3, 2) + pow(triangle.Y1 - triangle.Y3, 2));
    int c = sqrt(pow(triangle.X2 - triangle.X3, 2) + pow(triangle.Y2 - triangle.Y3, 2));
    return a + b + c;
}
