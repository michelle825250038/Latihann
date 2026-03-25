#include <stdio.h>

int fpb(int a, int b){
    while (b != 0){
        int c = b;
        b = a % b;
        a = c;
    }
    return a;
}

int kpk(int a, int b){
    return (a * b) / fpb(a,b);
}

int main() {
    int a,b;

    printf("Program Menghitung KPK\n\n");
    printf("Masukkan angka pertama: ");
    scanf("%d",&a);
    printf("Masukkan angka kedua: ");
    scanf("%d",&b);

    printf("KPK = %d\n", kpk(a,b));

    return 0;
}