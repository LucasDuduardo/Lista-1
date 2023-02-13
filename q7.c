#include <stdio.h>

int main(){

    float hour, min, second,time;

    puts("digite a quantidade de horas: ");
    scanf("%f",&hour);
    
    puts("digite a quantidade de minutos");
    scanf("%f",&min);
    
    puts("digite a quantidade de segundos");
    scanf("%f",&second);
    
    hour = hour * 3600;
    min = min * 60;
    time = hour + min + second;
    
    printf("a quantidade de tempo em segundos é de %.2f",time);

    return 0;
}
