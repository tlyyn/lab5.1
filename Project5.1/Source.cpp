// Lab 5_1
#include <iostream>
#include <cmath>
using namespace std;
double h(const double a, const double b); // прототип
int main()
{
	double s, t;
		cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;
	double c = (h(1, s * t) + pow(h(t + s, 1),2) / (1 + pow(h(s, t),3)));
	cout << "c = " << c << endl;
	return 0;
}
double h(const double a, const double b) // визначення
{
	return (a * a - sin(b) * cos(a) + b * b);
}