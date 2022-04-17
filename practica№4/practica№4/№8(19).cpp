#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>

using namespace std;

int main()  {
	int k;
	cin >> k;
	char arr[5] = { 0 };
	cin.get();
	for (int i = 0; i < k; i++) {
		arr[i] = cin.get();
	}
	FILE* input = fopen("input.txt", "r");
	FILE* output = fopen("output.txt", "w");
	if (!input || !output) {
		printf("open file error");
		return 1;
	}
	int c;
	while ((c = fgetc(input)) != EOF) {
		char f = c;
		bool flag = false;
		for (int i = 0; i < k; i++) {
			if (f == arr[i]) {
				flag = true;
			}
		}
		if (!flag) {
			fputc(f, output);
		}
	}
	fclose(input);
	fclose(output);
	return 0;
}