#include <stdio.h>

int main() {
    int menit, jam, sisa;

    printf("Program untuk Mengubah Menit ke Jam dan Menit\n\n"); 
    printf("Masukkan jumlah menit: ");
    scanf("%d", &menit);

    jam = menit / 60;
    sisa = menit % 60;

    printf("%d menit = %d jam %d menit\n", menit, jam, sisa);

    return 0;
}