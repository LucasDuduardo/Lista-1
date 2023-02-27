#include <stdio.h>
#include <stdlib.h>


int main(){

    float raio;  
    

    puts("insira o raio da circunferencia de analise ");
    scanf("%f",&raio);

    printf("raio da circunferencia escolhida: %.2f\n",raio);
    printf("o diâmetro da circunferencia é de %.2f\n ",2 * raio);
    printf("o valor da circunferencia: %.2f\n ", 2 * 3.14159 * raio);
    printf("o valor da area da circunferencia: %.2f\n ",3.14159 * raio *raio);

    return 0;

}
