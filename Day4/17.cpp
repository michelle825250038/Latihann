#include <stdio.h>

void ubahNilai(int *a) {
    *a = *a + 10;
}

int main() {
    int angka;

    printf("Program untuk Mengubah Nilai dengan menggunakan Pointer\n\n"); 
    printf("Masukkan angka: ");
    scanf("%d", &angka);

    ubahNilai(&angka);

    printf("Nilai setelah ditambah 10 = %d\n", angka);

    return 0;
}