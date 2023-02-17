#include <stdio.h>

int main(){

    int day;
    float pag, boom, liq;
  

    puts("entre com seus dias abaixo para saber seu pagamento do mês");
    scanf("%d",&day);
    printf("%d dias trabalhados",day);

    if (day <= 10)
    {
        pag = 50.25 * day;
        liq = pag * 0.9;
        puts("não bonificado");
        printf("salario do mês: %.2f",liq);
    }

    else if (10 < day <=20)
    {
        pag = 50.25 * day;
        boom = pag * 1.2;
        liq = boom *0.9;
        puts("Bonificado em 20 por cento");
        printf("salario do mês: %.2f",liq);
        
    }

    else if (20 < day)
    {
        pag = 50.25 * day;
        boom = pag * 1.3;
        liq = boom *0.9;
        puts("bonificado em 30 por cento");
        printf("salario do mês: %.2f",liq);
    }
    

    
    
    return 0;
    
    
    
    
    
}
