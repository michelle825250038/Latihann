#include <stdio.h>

int main() {
    int n = 5;
    int angka[n];
    int jumlah = 0;
    float rata;

    printf("Program untuk Menghitung Nilai Rata-Rata Array\n\n"); 

    for (int i = 0; i < n; i++) {
        printf("Masukkan angka ke-%d: ", i+1);
        scanf("%d", &angka[i]);

        jumlah = jumlah + angka[i];
    }

    rata = jumlah / n;

    printf("Rata-rata = %.2f\n", rata);

    return 0;
}