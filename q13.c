#include <stdio.h>

int main(){

    int a = 3, b = 2, c;
    
    printf("\nvalores iniciais dos termos:\na = %d \nb = %d",a,b);
    c = b;
    b = a;
    a = c;
    

    printf("\nnovos valores dos termos: \na = %d, \nb = %d",a,b);

    return 0;

    

    

}
