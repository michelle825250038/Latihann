#include <stdio.h>

int fpb(int a, int b){
    while (b != 0){
        int c = b;
        b = a % b;
        a = c;
    }
    return a;
}

int main() {
    int a, b;

    printf("Program Menghitung FPB\n\n");
    printf("Masukkan angka pertama: ");
    scanf("%d", &a);
    printf("Masukkan angka kedua: ");
    scanf("%d", &b);

    printf("FPB = %d\n", fpb(a,b));

    return 0;
}