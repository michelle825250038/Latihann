#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Program untuk Mengubah Celsius ke Fahrenheit\n\n");   
    printf("Masukkan suhu dalam Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5) + 32;

    printf("Suhu dalam Fahrenheit = %.2f\n", fahrenheit);

    return 0;
}