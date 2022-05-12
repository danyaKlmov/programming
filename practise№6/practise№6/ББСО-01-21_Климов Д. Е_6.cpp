#include <iostream>
#include <cmath>

using namespace std;

class Myclass {
private:
	double x, y, z;
public: 
	void set(double x, double y, double z);
	void print();
	void Run();

};
void Myclass::set(double x, double y, double z) {
	this->x = x;
	this->y = y;
	this->z = z;
}
void Myclass::print() {
	cout << x << ' ' << y << ' ' << z << ' ' << '\n';
}
void Myclass::Run() {
	double B = sqrt(10 * (pow(x,1.0/3)+ pow(x, y + 2))) * (pow(asin(z), 2) - abs(x - y));
	cout << B << '\n';
}


int main3() {
	Myclass c;
	c.set(0.01655, -2.75, 0.15);
	c.print();
	c.Run();
	Myclass* d = &c;
	d->print();
	d->Run();
	Myclass* p1 = new Myclass;
	p1->set(0.01655, -2.75, 0.15);
	p1->print();
	p1->Run();
	(*p1).print();
	(*p1).Run();
	delete p1;
	return 0;
}