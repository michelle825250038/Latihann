#include <stdio.h>

int hitungGaji(int jam, int upah){
    return jam * upah;
}

int hitungBonus(int gaji){
    if (gaji > 5000000)
        return 500000;
    else
        return 0;
}

int main() {
    int jam, upah;

    printf("Program Menghitung Gaji Karyawan\n\n");
    printf("Masukkan jumlah jam kerja: ");
    scanf("%d",&jam);
    printf("Masukkan upah per jam: ");
    scanf("%d",&upah);

    int gaji = hitungGaji(jam,upah);
    int bonus = hitungBonus(gaji);

    printf("Gaji = %d\n", gaji);
    printf("Bonus = %d\n", bonus);
    printf("Total = %d\n", gaji + bonus);

    return 0;
}