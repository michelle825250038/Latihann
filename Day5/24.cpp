#include <stdio.h>

int main() {
    int sisi;
    int luas, keliling;

    printf("Program untuk Menentukan Keliling dan Luas Persegi\n\n"); 
    printf("Masukkan panjang sisi: ");
    scanf("%d", &sisi);

    keliling = 4 * sisi;
    luas = sisi * sisi;
    
    printf("Keliling = %d\n", keliling);
    printf("Luas = %d\n", luas);

    return 0;
}