#include <stdio.h>

int main(){
    
    int a;
    
    puts("insira um valor para operar");
    scanf("%d",&a);
    
    printf("\no quadrado de %d, é igual a: %d",a,a*a);
    printf("\no triplo de %d, é igual a: %d",a,a*3);
    printf("\na metade de %d, é igual a: %d\n",a,a/2);

    return 0;
}
