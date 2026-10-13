#include "area.h"
#include <cmath>

double area(double a, double b, double c) {
    double p = (a + b + c) / 2;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}
