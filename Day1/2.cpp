#include <stdio.h>

int main() {
    int angka;

    printf("Program untuk Menentukan Bilangan Genap atau Ganjil\n\n");
    printf("Masukkan angka: ");
    scanf("%d", &angka);

    if (angka % 2 ==0) {
        printf("Angka tersebut merupakan bilangan genap.");
    } else {
        printf("Angka tersebut merupakan bilangan ganjil.");
    }

    return 0;
}