#include <stdio.h>

int main() {
    int angka[5];

    printf("Program untuk Menampilkan Isi Array Secara Terbalik\n\n"); 
    for (int i = 0; i < 5; i++) {
        printf("Masukkan angka ke-%d: ", i+1);
        scanf("%d", &angka[i]);
    }

    printf("Array terbalik:\n");

    for (int i = 4; i >= 0; i--) {
        printf("%d\n", angka[i]);
    }

    return 0;
}