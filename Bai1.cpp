#include <stdio.h>

// Hàm ki?m tra xem m?t s? có ph?i là b?i c?a 7 không
int isMultipleOfSeven(int num) {
	return (num % 7 == 0);
}

// Hàm chính
int main() {
	printf("Cac so nguyen co 2 chu so va la boi cua 7:\n");
	for (int i = 10; i <= 99; i++) {
		if (isMultipleOfSeven(i)) {
			printf("%d\t", i);
		}
	}
	return 0;
}
