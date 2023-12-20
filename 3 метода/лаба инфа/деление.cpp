#include <iostream>
#include <cmath>
using namespace std;
const double epsilon = 1e-3;

double f(double x)
{
    return sqrt(1-0.4*pow(x,2))-asin(x);
}

int main()
{
    
    double a, b, c;
    a = 0;
    b = 1;
    while (b - a > epsilon)
    {
    c = (a + b) / 2;
    if(f(b) * f(c) < 0)
        a = c;
        else
        b = c;
    }
    cout<<"корень равен "<< (a + b) / 2 << endl;
    return 0;
}