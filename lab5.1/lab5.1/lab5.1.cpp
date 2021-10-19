// lab5.1.cpp
// <Сташкевич Владислав>
// Лабораторна робота № 5.1
// Функції, що містять арифметичний вираз.
// Варіант 19

#include <iostream>
#include <cmath>

using namespace std;

// Створення прототипу
double h(const double a, const double b); 

int main() {
	double g, s;
	cout << "Enter g: "; cin >> g;
	cout << "Enter s: "; cin >> s;
	
	double c = (h(g + 1, s) + pow(h(g, s + 1), 2)) / (1 + pow(h(g * g, s * s), 3));
	cout << "Result: " << c << endl;
	
	return 0;
}

// Визначення методу
double h(const double a, const double b) 
{
	return (a * a) - (b * b);
}