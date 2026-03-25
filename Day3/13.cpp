#include <stdio.h>

int main() {
    int angka[5];
    int jumlahGenap = 0;

    printf("Program untuk Menghitung Banyaknya Bilangan Genap dari Array\n\n"); 
    for (int i = 0; i < 5; i++) {
        printf("Masukkan angka ke-%d: ", i+1);
        scanf("%d", &angka[i]);
        
        if (angka[i] % 2 == 0) {
            jumlahGenap++;
        }
    }

    printf("Jumlah bilangan genap = %d\n", jumlahGenap);

    return 0;
}