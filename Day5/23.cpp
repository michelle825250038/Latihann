#include <stdio.h>

int main() {
    int nilai;

    printf("Program untuk Menentukan Grade Nilai\n\n"); 
    printf("Masukkan nilai: ");
    scanf("%d", &nilai);

    if (nilai >= 80) {
        printf("Grade A\n");
    } else if (nilai >= 70) {
        printf("Grade B\n");
    } else if (nilai >= 60) {
        printf("Grade C\n");
    } else {
        printf("Grade D\n");
    }
    
    return 0;
}