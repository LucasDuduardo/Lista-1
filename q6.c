#include <stdio.h>

int main(){
    float a;
    char s;
    float imc;
    
    puts("insira seu sexo para saber o peso ideal ");
    scanf("%c",&s);
    puts("insira a sua altura para saber o peso ideal");
    scanf("%f",&a);
    
    
    if (s == 'm')
    {
        imc = 72.7 * a -58;
        printf("seu peso ideal é: %.1f",imc);

    }
    else if (s = 'f')
    {
        imc = 62.1 * a - 44.7;
        printf("o seu peso ideal é: %.1f",imc);
    }
    
    
   
    
    
    
}
