#include <stdio.h>

int main(){
    
    int a;
    
    puts("digite um inteiro para verificar sua paridade");
    scanf("%d",&a);

    a%2 ? printf("o termo é impar.") : printf("então é par");
    
    
    
    return 0;
}
