#include<iostream>

using namespace std;

int main() {
	int a, b, s;
	cin >> a >> b;
	s = b;
	while (s <= a) {
		cout << s << ' ';
		s++;
	}
	return 0;
}