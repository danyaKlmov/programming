#include<iostream>

using namespace std;

int main9() {
	int a, b;
	cin >> a >> b;
	int s = 0;
	for (int i = a; i <= b; ++i)
		s += i;
	cout << s;
	return 0;
}