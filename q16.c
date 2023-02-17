#include <stdio.h>

int main(){

    int vhour, nhour;
    float inss, saliq, sabu;

    printf("informe o valor da sua hora aula: ");
    scanf("%d",&vhour);
    
    printf("informe quantas horas trabalhou este mês: ");
    scanf("%d",&nhour);
    
    printf("percentual de desconto do inss: ");
    scanf("%f",&inss);

    saliq = vhour * nhour;
    sabu = saliq * inss;

    printf("salario liquido do mês: %.2f ",saliq);
    printf("salario bruto: %.2f",sabu);

    return 0;



}
