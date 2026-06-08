#include <iostream>
using namespace std;

template <class T>
void swap_func(T& x, T& y) {
	T tmp;
	tmp = x;
	x = y;
	y = tmp;
}

int main() {
	int a, b;
	double c, d;
	char x, y;
	a = 10;   b = 20;
	c = 10.5; d = 20.4;
	x = 'x';  y = 'y';
	

	cout << "a = " << a << ", " << "b = " << b << endl;
	swap_func(a, b);
	cout << "a = " << a << ", " << "b = " << b << endl;
	
	cout << "c = " << c << ", " << "d = " << d << endl;
	swap_func(c, d);
	cout << "c = " << c << ", " << "d = " << d << endl;

	cout << "x = " << x << ", " << "y = " << y << endl;
	swap_func(x, y);
	cout << "x = " << x << ", " << "y = " << y << endl;
}