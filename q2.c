#include <stdio.h>

int main(){
    int a;
    
    puts("insira um inteiro para ver seu valor em octal e hexadecimal");
    scanf("%d",&a);
    printf("\nem octal: %o",a);
    printf("\nem hexadecimal: %X\n",a);

    return 0;

}
