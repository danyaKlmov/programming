#include<iostream>

using namespace std;

class MyClass {
private:
	char x, y;
	void privf1() {
		cout << "privf1";
	}

protected:
	char* ix, * iy;
	void privf5() {
		cout << "privf5";
	}
	void privf2() {
		cout << "privf2";
	}
	void privf3() {
		cout << "privf3";
	}
public:
	char MyClass::* pointers[2]={&MyClass::x, &MyClass::y};
	MyClass() {
		x = 'a'; y = 'b';
		ix = &x;
		iy = &y;
	}

	void pubf1() {
		cout << "pubf1";
	}
	void privf4() {
		cout << "privf4";
	}
};

int main() {
	MyClass* c = new MyClass;
	c->*(c->pointers[0]) = 'c';
	c->*(c->pointers[1]) = 'c';
	delete c;
	return 0;
}