#include <iostream>
#include "existence.h"
#include "triangle_type.h"
using namespace std;

int main() {
    cout << "Enter triangle sides:" << endl;
    double a, b, c;
    cin >> a >> b >> c;
    bool exists = triangle_exists(a, b, c);
    string triangle_type_string = triangle_type(a, b, c);
    double p = 0;
    double s = 0;
    if (exists) {
        cout << "Triangle exists, it is ";
        cout << triangle_type_string << "." << endl;
        cout << "Perimeter equals " << p << endl;
        cout << "Area equals " << s << endl;
    } else {
        cout << "Triangle does not exist" << endl;
    }
    return 0;
}
