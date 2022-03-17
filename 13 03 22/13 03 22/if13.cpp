#include <iostream>

using namespace std;
int main12() {
	int a, b, c, medium;
	cin >> a >> b >> c;
	medium = a;
	if ((b > medium) && (b < c)) {
		medium = b;
	}
	if ((c > medium) && (c < b)) {
		medium = c;
	}
	cout << medium;
	return 0;
}