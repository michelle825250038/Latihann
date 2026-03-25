#include <stdio.h>

int main() {
    int n, jumlah = 0;

    printf("Program Menghitung Jumlah Bilangan Ganjil\n\n");
    printf("Masukkan n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            jumlah += i;
        }
    }

    printf("Jumlah bilangan ganjil = %d\n", jumlah);

    return 0;
}