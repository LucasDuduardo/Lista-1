#include <stdio.h>

int main(){

    float cel,fah;
    
    puts("iniciando conversor de temperatura...");
    
    printf("conversor iniciado, entre com o valor em Celsius: ");
    scanf("%f",&cel);
    fah = (9*cel +160 ) / 5;
    
    printf(" valor em Fahrenheit: %.2f",fah);

    return 0;
    
}
