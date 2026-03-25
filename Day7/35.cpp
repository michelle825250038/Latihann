#include <stdio.h>

int main() {
    char huruf;

    printf("Program Menentukan Huruf Vokal atau Konsonan\n\n");

    printf("Masukkan huruf: ");
    scanf(" %c", &huruf);

    if (huruf=='a'||huruf=='i'||huruf=='u'||huruf=='e'||huruf=='o'||
       huruf=='A'||huruf=='I'||huruf=='U'||huruf=='E'||huruf=='O') {
        printf("Huruf vokal\n");
    } else {
        printf("Huruf konsonan\n");
    }

    return 0;
}