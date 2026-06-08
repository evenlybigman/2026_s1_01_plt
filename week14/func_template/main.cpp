#include <iostream>
using namespace std;

void swap_func(int& x, int& y) {
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}

int main() {
	int a, b;

	a = 10;
	b = 20;

	cout << "a = " << a << ", " << "b = " << b << endl;

	swap_func(a, b);

	cout << "a = " << a << ", " << "b = " << b << endl;
}