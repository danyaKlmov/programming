#include<iostream>
#include<cmath>

using namespace std;

int main() {
	int a;
	cin >> a;
	int b = a / 100;
	int c = (a / 10) % 10;
	int d = a % 10;
	bool e = (b < c ) && (c < d);
	cout << e;
	return 0;
}