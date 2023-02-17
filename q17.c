#include <stdio.h>

int main(){
    
    int a;
    int mod_a;
    
    printf("digite um valor inteiro: ");
    scanf("%d",&a);
    
    mod_a = ~a + 1;
    printf("inteiro modulado: %d",mod_a);
    
    return 0;


}
