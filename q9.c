#include <stdio.h>

int main(){
    
    int a;

    puts("escolha um valor para ver, respectivamente o antecessor e sucessor");
    scanf("%d",&a);

    printf("antecessor de %d = %d, sucessor: %d",a,a-1,a+1);
}
