#include <stdio.h>

int main() {
    int angka;

    printf("Program untuk Menentukan Bilangan Positif atau Negatif\n\n");   
    printf("Masukkan sebuah angka: ");
    scanf("%d", &angka);

    if (angka > 0) {
        printf("Bilangan Positif\n");
    } else if (angka < 0) {
        printf("Bilangan Negatif\n");
    } else {
        printf("Bilangan Nol\n");
    }

    return 0;
}