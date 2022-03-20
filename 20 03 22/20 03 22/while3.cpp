#include<iostream>

using namespace std;

int main2() {
	int n, k, c, d;
	cin >> n >> k;
	d = 0;
	c = n;
	while (c >= k) {
		c-=k; 
		d++;
	}
	cout << d << ' ' << c;
	return 0;
}