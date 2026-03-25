#include <stdio.h>

int main() {
    int n, i;
    int jumlah = 0;

    printf("Program untuk Menghitung Jumlah Bilangan 1 sampai n\n\n");   
    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        jumlah = jumlah + i;
    }

    printf("Jumlah bilangan dari 1 sampai %d = %d\n", n, jumlah);

    return 0;
}