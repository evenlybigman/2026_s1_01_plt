#include <iostream>
using namespace std;

template <class T>
class T_array {
	T buf[100];
public:
	void set_val(int idx, T val) {
		buf[idx] = val;
	}
	void print() {
		cout << buf[0] << endl;
	}
};

int main() {
	T_array<int> i;
	T_array<double> d;
	T_array<char> c;

	i.set_val(0, 100);
	i.print();
	d.set_val(0, 10.5);
	d.print();
	c.set_val(0, 'K');
	c.print();
}