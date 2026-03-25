#include <stdio.h>

void tukar(int *a, int *b);

int main() {
    int x, y;
    printf("Program untuk Menukar Dua Nilai dengan menggunakan pointer\n\n");  
    printf("Masukkan angka pertama: ");
    scanf("%d", &x);
    printf("Masukkan angka kedua: ");
    scanf("%d", &y);

    tukar(&x, &y);

    printf("Setelah ditukar:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}

void tukar(int *a, int *b) {
    int c;
    c = *a;
    *a = *b;
    *b = c;
}