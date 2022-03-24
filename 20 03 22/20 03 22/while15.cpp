#include<iostream>

using namespace std;

int main7() {
	int a = 1000, p, k;
	cin >> p;
	k = 0;
	while (a <= 1100) {
		k++;
		a += a * p / 100;
	}
	cout << k << ' ' << a;
	return 0;
}