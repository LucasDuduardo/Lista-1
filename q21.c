#include <stdio.h>

int main(){

    int a,b;

    puts("digite o termo 1 para verificar se é multiplo de 2.");
    scanf("%d",&a);
    puts("digite o termo 2.");
    scanf("%d",&b);

    a%b ? printf("não é multiplo") : printf("é multiplo");

    return 0;
}
