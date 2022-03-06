#include<iostream>
#include<cmath>

using namespace std;

int main4() {
	int x1,y1,x2,y2;
	cin >> x1 >> y1 >> x2 >> y2;
	int a;
	a = abs(x2 - x1);
	int b;
	b = abs(y2 - y1);
	int p;
	p = (a + b) * 2;
	int s;
	s = a * b;
	cout << p << " " << s;
	return 0;

	

}