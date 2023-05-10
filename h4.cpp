#include <iostream>
#include <cmath>

using namespace std;

double f(double x, double t) {
    return sin(x*t);
}

int main() {
    double x = 1;
    double t = 0;
    double h = 0.001; // h can be changed
    double tfinal = 76.5;

    while (t < tfinal) {
        x = x + h*f(x, t);
        t += h;
    }

    cout << "x(" << tfinal << ") = " << x << endl;

    return 0;
}
