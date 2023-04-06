#include <iostream>
#include <cmath>

using namespace std;

double f(double x, double y, double z) {
    return z;
}

double g(double x, double y, double z) {
    return -1.0 / 4.0 * pow(M_PI, 2) * (y + 1);
}

void rk4(double &x, double &y, double &z, double h) {
    double k1 = h * f(x, y, z);
    double l1 = h * g(x, y, z);
    double k2 = h * f(x + h / 2, y + k1 / 2, z + l1 / 2);
    double l2 = h * g(x + h / 2, y + k1 / 2, z + l1 / 2);
    double k3 = h * f(x + h / 2, y + k2 / 2, z + l2 / 2);
    double l3 = h * g(x + h / 2, y + k2 / 2, z + l2 / 2);
    double k4 = h * f(x + h, y + k3, z + l3);
    double l4 = h * g(x + h, y + k3, z + l3);
    double y_new = y + 1.0 / 6.0 * (k1 + 2 * k2 + 2 * k3 + k4);
    double z_new = z + 1.0 / 6.0 * (l1 + 2 * l2 + 2 * l3 + l4);
    y = y_new;
    z = z_new;
    x += h;
}

int main() {
    double x0 = 0.0;
    double y0 = 0.0;
    double xn = 1.0;
    double yn = 1.0;
    double h = 0.01;
    int n_iterations = 100;

    double a1 = 0.0;
    double a2 = 0.0;
    double b1 = 0.0;
    double b2 = 0.0;
    double a = 0.0;
    double b = yn;

    // First Guess
    double guess1 = 3.0;
    double z1 = guess1;
    double x1 = x0;
    double y1 = y0;
    for (int i = 0; i < n_iterations; i++) {
        rk4(x1, y1, z1, h);
    }

    // Second Guess
    double guess2 = 3.5;
    double z2 = guess2;
    double x2 = x0;
    double y2 = y0;
    for (int i = 0; i < n_iterations; i++) {
        rk4(x2, y2, z2, h);
    }

    if (y1 < yn && y2 > yn) {
        b1 = y1;
        b2 = y2;
        a1 = guess1;
        a2 = guess2;
    } else if (y2 < yn && y1 > yn) {
        b1 = y2;
        b2 = y1;
        a1 = guess2;
        a2 = guess1;
    } else {
        cout << "Wrong choice!" << endl;
        return 0;
    }

    a = a1 + ((a1 - a2) / (b1-b2));
    }
