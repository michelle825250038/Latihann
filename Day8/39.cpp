#include <stdio.h>

void input(int a[]) {
    for (int i=0;i<5;i++){
        printf("Masukkan angka ke-%d: ", i+1);
        scanf("%d",&a[i]);
    }
}

int cari(int a[], int x) {
    for (int i=0;i<5;i++){
        if (a[i] == x)
            return i;
    }
    return -1;
}

int main() {
    int angka[5], cariAngka, hasil;

    printf("Program Mencari Angka dalam Array\n\n");

    input(angka);

    printf("Masukkan angka yang dicari: ");
    scanf("%d",&cariAngka);

    hasil = cari(angka, cariAngka);

    if (hasil != -1) {
        printf("Angka ditemukan pada index %d\n", hasil);
    } else {
        printf("Angka tidak ditemukan\n");
    }
    return 0;
}