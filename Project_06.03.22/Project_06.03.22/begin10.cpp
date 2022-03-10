#include<iostream>
#include<cmath>

using namespace std;

int main7() {
	int a, b;
	cin >> a >> b;
	int q, w, e, r;
	q = (a * a) - (b * b);
	w = (a * a) + (b * b);
	e = (a * a) * (b * b);
	r = (a * a) / (b * b);
	cout << q << ' ' << w << ' ' << e << ' '<< r;
	return 0;
}