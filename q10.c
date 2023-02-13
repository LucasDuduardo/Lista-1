#include <stdio.h>

int main(){

    int com, lar, alt,vol;
    

    
    puts("insira os valores para comprimento");
    scanf("%d",&com);
    fflush(stdin);
    
    puts("insira os valores para largura");
    scanf("%d",&lar);
    fflush(stdin);
   
    puts("insira os valores para altura");
    scanf("%d",&alt);
    fflush(stdin);
   
    
    
    printf("o volume do objeto é igual a %d",com*lar*alt);
    fflush(stdin);
    
    return 0;
}
