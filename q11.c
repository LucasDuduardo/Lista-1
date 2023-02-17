#include <stdio.h>

int main(){

    float cdol, real, conv;

    printf("digite o valor em real que deseja converter para dolar ");
    scanf("%f",&real);
    
    
    printf("digite a cotação atual do dolar ");
    scanf("%f",&cdol);
   
    puts("realizando conversão...");
    printf("valor convertido : %.2f Dolares\n",real * cdol);
    

    return 0;

    }
    

