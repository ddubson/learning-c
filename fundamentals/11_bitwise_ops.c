#include <stdio.h>

void not_operator();

void and_operator();

void or_operator();

void xor_operator();

void shift_left_operator();

void shift_right_operator();

int main() {
    not_operator();
    and_operator();
    or_operator();
    xor_operator();
    shift_left_operator();
    shift_right_operator();
    return 0;
}

void shift_right_operator() {
    int a = 32;
    printf("%d << 1 = %d\n", a, a << 1);
    printf("%d << 2 = %d\n", a, a << 2);

}

void shift_left_operator() {
    int a = 32;
    printf("%d >> 1 = %d\n", a, a >> 1);
    printf("%d >> 2 = %d\n", a, a >> 2);
}

void xor_operator() {
    char x = 'A';
    char y = 'L';
    printf("%c XOR %c = ", x, y);
    char z = x ^y;
    printf("%c\n", z);
}

void and_operator() {
    char x = 'A';
    char y = 'L';
    printf("%c AND %c = ", x, y);
    char z = x & y;
    printf("%c\n", z);
}

void or_operator() {
    char x = 'A';
    char y = 'L';
    printf("%c OR %c = ", x, y);
    char z = x | y;
    printf("%c\n", z);
}

void not_operator() {
    char x = 'A';
    printf("!%c = ", x);
    char y = ~x;
    printf("%c\n", y);
}