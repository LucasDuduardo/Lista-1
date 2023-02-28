#include <stdio.h>
#include <math.h>

int main(){
    
    float x1,y1,x2,y2,dist;

    printf("insira uma coordenada para X1: ");
    scanf("%.2f %.2f",&x1,&x2);
    fflush(stdin);
    
    printf("insira uma coordenada para Y1: ");
    scanf("%.2f %.2f",&y1,&y2);
    fflush(stdin);
    
    dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("a uma distancia do ponto x(%.2f,%.2f) e y(%.2f,%.2f) é de %.2f",x1,x2,y1,y2,dist);



 
    
    return 0;
}
