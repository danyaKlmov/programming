#include <cstdio>

class A {
public:
	void f() {
		printf("A\n");
	}
};
class B : virtual public A {
public:
	void f() {
		printf("B\n");
	}
};
class C :  public virtual B{
public:
	void f() {
		printf("C\n");
	}
};
class E : public virtual A, public virtual B, public virtual C {
public:
	void f() {
		printf("E\n");
	}
};
class D : public virtual C, public virtual E {
public:
	void f() {
		printf("D\n");
	}
};
class F :  public virtual C, public virtual D {
};
int main() {
	F d;
	d.f();
}

