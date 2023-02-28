#include <stdio.h>

int main(){

    int a,b,resp;

    printf("digite o valor de x: ");
    scanf("%d",&a);

    printf("digite o valor de n: ");
    scanf("%d",&b);

    resp = a << b;

    printf("o valor %d vezes 2 elevado a %d = %d\n",a,b,resp);

    return 0; 
}
