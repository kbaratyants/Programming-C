#pragma once

#include <cmath>

    struct Rectangle {
    double x1;
    double y1;
    double x2;
    double y2;
    double x3;
    double y3;
    double x4;
    double y4;
    };

double countLength(double x1, double y1, double x2, double y2) {
    double x = std::abs(x2 - x1), y = std::abs(y2 - y1);
    return std::sqrt(x*x + y*y);
}

double RectangleP(struct Rectangle Rect) {
    return (countLength(Rect.x1, Rect.y1, Rect.x2, Rect.y2) + countLength(Rect.x2, Rect.y2, Rect.x3, Rect.y3)) * 2;
}