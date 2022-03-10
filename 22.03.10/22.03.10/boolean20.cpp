#include<iostream>
#include<cmath>

using namespace std;

int main8() {
	int a;
	cin >> a;
	int b = a / 100;
	int c = a % 10;
	int d = (a / 10) % 10;
	bool e = (b != c) && (b != d) && (c != d);
	cout << e;
	return 0;
}