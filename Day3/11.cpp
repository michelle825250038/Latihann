#include <stdio.h>

void cekNilai(int nilai);

int main() {
    int nilai;

    printf("Program untuk Menentukan Kelulusan\n\n"); 
    printf("Masukkan nilai: ");
    scanf("%d", &nilai);

    cekNilai(nilai);

    return 0;
}

void cekNilai(int nilai) {
    if (nilai >= 60) {
        printf("Selamat! Anda Lulus\n");
    } else {
        printf("Maaf, Anda Tidak Lulus\n");
    }
}