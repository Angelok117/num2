#include "existence.h"

bool triangle_exists(double a, double b, double c) {
    if (a < b + c && b < a + c && c < a + b) {
        return true;
    }
    return false;
}
