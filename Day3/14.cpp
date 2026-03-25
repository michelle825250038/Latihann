#include <stdio.h>

int main() {
    int a, b, c;

    printf("Program untuk Menukar Dua Nilai\n\n");  
    printf("Masukkan nilai a: ");
    scanf("%d", &a);
    printf("Masukkan nilai b: ");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("Setelah ditukar:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}