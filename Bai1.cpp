#include <stdio.h>

// H�m ki?m tra xem m?t s? c� ph?i l� b?i c?a 7 kh�ng
int isMultipleOfSeven(int num) {
	return (num % 7 == 0);
}

// H�m ch�nh
int main() {
	printf("Cac so nguyen co 2 chu so va la boi cua 7:\n");
	for (int i = 10; i <= 99; i++) {
		if (isMultipleOfSeven(i)) {
			printf("%d\t", i);
		}
	}
	return 0;
}
