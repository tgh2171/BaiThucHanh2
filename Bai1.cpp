#include <stdio.h>

// Hàm kiểm tra xem một số có phải là bội của 7 không
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
