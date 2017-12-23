#include <stdio.h>

int main () {
	char c, code[65536]; 
	int m = 0;
	while ((c = getchar()) != EOF) {
		if (c == '>' || c == '<' || c == '+' || c == '-' || c == '.' || c ==',' || c == '[' || c == ']') {
			code[m++] = c;
		}
	}
	for (int i = 0, j = 0; i < m; i++, j = (j + 1) % 16) {
		if (code[i] == '>') {
			printf("0 ");
		} else if (code[i] == '<') {
			printf("1 ");
		} else if (code[i] == '+') {
			printf("2 ");
		} else if (code[i] == '-') {
			printf("3 ");
		} else if (code[i] == '.') {
			printf("4 ");
		} else if (code[i] == ',') {
			printf("5 4 ");
		} else if (code[i] == '[') {
			printf("6 ");
		} else if (code[i] == ']') {
			printf("7 ");
		}
		if (j == 15) {
			printf("\n");
		}
	}
	printf("f ");
}
