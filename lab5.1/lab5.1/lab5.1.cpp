// lab5.1.cpp
// <��������� ���������>
// ����������� ������ � 5.1
// �������, �� ������ ������������ �����.
// ������ 19

#include <iostream>
#include <cmath>

using namespace std;

// ��������� ���������
double h(const double a, const double b); 

int main() {
	double g, s;
	cout << "Enter g: "; cin >> g;
	cout << "Enter s: "; cin >> s;
	
	double c = (h(g + 1, s) + pow(h(g, s + 1), 2)) / (1 + pow(h(g * g, s * s), 3));
	cout << "Result: " << c << endl;
	
	return 0;
}

// ���������� ������
double h(const double a, const double b) 
{
	return (a * a) - (b * b);
}