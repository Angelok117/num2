#include "triangle_type.h"

string triangle_type(double a, double b, double c) {
    string triangle_type_string = "";
    if (a == b && b == c) {
        triangle_type_string += "equilateral "; // равносторонний
    } else if (a == b || b == c || a == c) {
        triangle_type_string += "isosceles "; // равнобедренный
    }
    if (a >= b && a >= c) {
        if (a * a == b * b + c * c) {
            triangle_type_string += "right"; // прямоугольный
        } else if (a * a < b * b + c * c) {
            triangle_type_string += "acute"; // остроугольный
        } else {
            triangle_type_string += "obtuse"; // тупоугольный
        }
    } else if (b >= a && b >= c) {
        if (b * b == a * a + c * c) {
            triangle_type_string += "right"; // прямоугольный
        } else if (b * b < a * a + c * c) {
            triangle_type_string += "acute"; // остроугольный
        } else {
            triangle_type_string += "obtuse"; // тупоугольный
        }
    } else {
        if (c * c == a * a + b * b) {
            triangle_type_string += "right"; // прямоугольный
        } else if (c * c < a * a + b * b) {
            triangle_type_string += "acute"; // остроугольный
        } else {
            triangle_type_string += "obtuse"; // тупоугольный
        }
    }
    return triangle_type_string;
}
