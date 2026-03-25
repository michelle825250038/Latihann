#include <stdio.h>

int main() {
    int n, i, prima = 1;

    printf("Program Menentukan Bilangan Prima\n\n");
    printf("Masukkan angka: ");
    scanf("%d", &n);

    if (n <= 1) {
        prima = 0;
    }

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            prima = 0;
            break;
        }
    }

    if (prima)
        printf("Bilangan prima\n");
    else
        printf("Bukan bilangan prima\n");

    return 0;
}