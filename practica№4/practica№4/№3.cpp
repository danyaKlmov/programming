#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main() {
	FILE* input = fopen("input.txt", "r");
	if (!input) {
		printf("open file error");
		return 1;
	}
	int k = 0;
	int c;
	while ((c = fgetc(input)) != EOF) {
		if (c == ' ') {
			k += 1;
		}
	}
	printf("%d", k + 1);
	fclose(input);
	return 0;
}