// Lab_05_1.cpp
// < Клак Соломія >
// Лабораторна робота № 5.1
// Варіант 14
#include <iostream>
#include <cmath>
using namespace std;
double h(const double x, const double b); // прототип
int main()
{
	double s, t;
	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;
	// c = ( h^3(t^2, 1) + h(1, t*s^2) ) / ( 1 + h^2(s, t) )
	double c = (pow(h(t * t, 1), 3) + h(1, t * s * s)) / (1 + pow(h(s, t), 2));
	cout << "c = " << c << endl;
	return 0;
}
double h(const double a, const double b) // визначення
{
	return a * a * sin(b) + b * b * cos(a);
}
