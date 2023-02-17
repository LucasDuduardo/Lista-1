#include <stdio.h>

int main(){
    
    int n1, n2;

    printf("escolha o primeiro numero: ");
    scanf("%d",&n1);
    
    printf("escolha o segundo termo: ");
    scanf("%d",&n2);
    
    
    printf("vamos verificar as operações entre %d e %d",n1, n2);

    printf("a soma %d, e a diferença: %d",n1 + n2, n1 - n2);
    printf("o quociente %d e o resto da divisão %d", n1 / n2, n1 % n2);


    return 0;



}
