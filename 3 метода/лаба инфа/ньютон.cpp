#include <iostream>
#include <math.h>

using namespace std;

double f(double x)
{
	return sqrt(1-0.4*pow(x,2))-asin(x);
}

double diff(double x)
{
    const double h = 1e-10;
    return (f(x + h) - f(x - h)) / (2.0 * h);
}

int main()
{
	setlocale(LC_ALL, "ru");
	double x = 0, x0 = 1;
	double e = 0.000001;
	do
	{
		x0 = x;
		x = x0 - f(x) / diff(x);
	} while (fabs(x0 - x) > e);
	cout << "Найденный корень: " << x ;
	return 0;
}
