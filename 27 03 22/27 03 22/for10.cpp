#include<iostream>

using namespace std;

int main7() {
	int n;
	cin >> n;
	double s = 0;
	for (int i = 1; i <= n; i++)
		s += 1.0 / i;
	cout << s << ' ';
	return 0;
}