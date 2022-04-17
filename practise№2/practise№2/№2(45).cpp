#include<iostream>
#include<cmath>

using namespace std;

int main() {
	int n;
	cin >> n;
	double** matrix = new double* [n];
	for (int i = 0; i < n; i++) {
		matrix[i] = new double[n];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}
	double norma = 0;
	for (int line = 0; line < n; line++) {
		double s = 0;
		for (int col = 0; col < n; col++) {
			s += abs(matrix[line][col]);
		}
		if (s > norma) {
			norma = s;
		}
	}
	cout << norma;
	for (int i = 0; i < n; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;
	return 0;
}