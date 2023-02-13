#include <stdio.h>

int main(){

    float a;
    
    puts("insira o valor da conta de restaurante");
    scanf("%f",&a);
    printf("o valor da conta ficou: %.2f,com a taxa de serviço fica: %.2f\n ",a,a*110/100);

    return 0;
}
