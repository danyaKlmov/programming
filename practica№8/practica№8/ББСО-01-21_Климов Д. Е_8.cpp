#include <iostream>

using namespace std;

class X {
public:
	int x1, x2;
	X(int x1, int x2) {
		this->x2 = x2;
		this->x1 = x1;
	}
	virtual ~X() {}
	void virtual setup() { cin >> x1 >> x2; }
	int virtual show() {cout << x1 << " " << x2;}
};
class Y : public X {
public:
	int y;
	Y(int x1, int x2, int y)
		:X(x1, x2) {
		this->y = y;
	}
	void virtual setup() {X::setup(); cin >> y;}
	int virtual show() {X::setup(); cout << " " << y;}
	int Run() {
		return (x1 * x1) * (x2 * x2) * (y * y);
	}
};
int main() {
	Y a(10, 1, 8);
	cout << a.Run();
	return 0;
}

