#include<iostream>
#include<cmath>

using namespace std;

int main8() {
	int a, b;
	cin >> a >> b;
	double c;
	c = sqrt ((a * a) + (b * b));
	double p;
	p = a + b + c;
	cout << c << ' ' << p;
	return 0;
}