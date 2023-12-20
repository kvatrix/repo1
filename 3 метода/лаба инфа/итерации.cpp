#include <iostream>
#include <cmath>
using namespace std;

double f(double x)
{
    return  sqrt(1-0.4*pow(x,2))-asin(x);
}

double diff(double x)
{
    const double h = 1e-10;
    return (f(x + h) - f(x - h)) / (2.0 * h);
}

double fi(double x, double b, double a)
{
    double v;
    if (diff(b) > 0)
        v = -(1 / fabs(fmax(diff(a), diff(b)))) / 2;
    else
        v = (1 / fabs(fmax(diff(a), diff(b)))) / 2;
    return x + v * f(x);
}

double iterations(double a, double b, double eps)
{
    double y, b1 = b;
    do {
        y = b1;
        b1 = fi(b1, b, a);
        }
    while (fabs(b1 - y) > eps);
    return b1;
}
int main()
{
    setlocale(LC_ALL, "rus");
    cout.precision(9);
    double a = 0;
    double b = 1;
    double eps = 0.000000001;
    cout << "Найденный корень = " << iterations(a, b, eps);
    return 0;
}
