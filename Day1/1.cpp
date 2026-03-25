#include <stdio.h>

int main() {
    int n, i, faktorial = 1;

    printf("Program untuk Menghitung Faktorial\n\n");
    printf("Masukkan angka: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        faktorial = faktorial * i;
    }

    printf("Hasil faktorial: %d", faktorial);

    return 0;
}