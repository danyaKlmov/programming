#include <iostream>

using namespace std;

class matrix {
	double A[3][3];
public:
	void set(int a, int b, double c) {
		A[a][b] = c;
	}
	double get(int a, int b) {
		return A[a][b];
	}
	matrix(double A[3][3]) {
		this->A[0][0] = A[0][0];
		this->A[1][1] = A[1][1];
		this->A[2][2] = A[2][2];
		this->A[0][1] = A[0][1];
		this->A[0][2] = A[0][2];
		this->A[1][0] = A[1][0];
		this->A[1][2] = A[1][2];
		this->A[2][0] = A[2][0];
		this->A[2][1] = A[2][1];
	}
	matrix(const matrix& source) {
		this->A[0][0] = source.A[0][0];
		this->A[1][1] = source.A[1][1];
		this->A[2][2] = source.A[2][2];
		this->A[0][1] = source.A[0][1];
		this->A[0][2] = source.A[0][2];
		this->A[1][0] = source.A[1][0];
		this->A[1][2] = source.A[1][2];
		this->A[2][0] = source.A[2][0];
		this->A[2][1] = source.A[2][1];
	}
	matrix operator*(double ro) {
		matrix d = *this;
		d.A[0][0] *= ro;
		d.A[1][1] *= ro;
		d.A[2][2] *= ro;
		d.A[0][1] *= ro;
		d.A[0][2] *= ro;
		d.A[1][0] *= ro;
		d.A[1][2] *= ro;
		d.A[2][0] *= ro;
		d.A[2][1] *= ro;
		return d;
	}
	matrix operator*(const matrix& ro) {
		matrix e = *this;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				e.A[i][j] = 0;
				for (int k = 0; k < 3; k++) {
					e.A[i][j] += A[i][k] * ro.A[k][j];
				}
			}
		}
		return e;
	}
	friend matrix operator*(double lo, const matrix& ro);
	void print() {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cout << A[i][j] << ' ';
			}
			cout << '\n';
		}
	}
};
matrix operator*(double lo, const matrix& ro) {
	matrix d = ro;
	d.A[0][0] *= lo;
	d.A[1][1] *= lo;
	d.A[2][2] *= lo;
	d.A[0][1] *= lo;
	d.A[0][2] *= lo;
	d.A[1][0] *= lo;
	d.A[1][2] *= lo;
	d.A[2][0] *= lo;
	d.A[2][1] *= lo;
	return d;
}
int main() {
	double B[3][3], C[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> B[i][j];
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> C[i][j];
		}
	}
	matrix m1(B), m2(C);
	m1.print();
	m2.print();
	matrix m3 = m1 * m2;
	m3.print();
	int d = 2;
	matrix m4 = m1 * d;
	m4.print();
	matrix m5 = d * m2;
	m5.print();
	return 0;
}