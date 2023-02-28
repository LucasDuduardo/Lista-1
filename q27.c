#include <stdio.h>
#include <math.h>

int main(){
    
    float a,b,c;

    printf("insira o termo 1: ");
    scanf("%f",&a);
    fflush(stdin);
    
    printf("insira o termo 2: ");
    scanf("%f",&b);
    fflush(stdin);
    
    printf("insira o termo 3: ");
    scanf("%f",&c);
    fflush(stdin);
    
    float meda,medg;
    meda = (a + b + c) / 3;
    medg = pow(a*b*c, 3);

    printf("média aritmética: %.2f ",meda);
    printf("media geométrica: %.2f",medg);

    return 0;

}
