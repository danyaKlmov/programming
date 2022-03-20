#include<iostream>

using namespace std;

int main1() {
	int a, b, s;
	cin >> a >> b;
	s = a;
	while (s <= b) { 
		cout << s << ' ';
		s++;
	}
	return 0;
}