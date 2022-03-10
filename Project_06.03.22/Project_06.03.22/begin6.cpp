#include<iostream>
#include<cmath>

using namespace std;

int main6() {
	int a, b, c;
	cin >> a >> b >> c;
	int v;
	v = a * b * c;
	int s;
	s = 2 * (a * b + b * c + a * c);
	cout << v << ' ' << s;
	return 0;
}