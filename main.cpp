#include <iostream>
using namespace std;

int main() {
    cout << "Enter triangle sides:" << endl;
    double a, b, c;
    cin >> a >> b >> c;
    bool exists = false;
    string triangle_type = "";
    double p = 0;
    double s = 0;
    if (exists) {
        cout << "Triangle exists, it is ";
        cout << triangle_type << "." << endl;
        cout << "Perimeter equals " << p << endl;
        cout << "Area equals " << s << endl;
    } else {
        cout << "Triangle does not exist" << endl;
    }
    return 0;
}
