#include <stdio.h>

int main(){

    float sec, hour, min;

    printf("inclua a quantidade de segundas que deseja: ");
    scanf("%f",&sec);

    hour = sec / 3600;
    min = sec / 60;

    printf("em %.2f segundos há %.2f horas, %.2f minutos",sec,hour,min);


}
