#include <stdio.h>

int main(){
    
    int num,uni,dez,cent;
    
    printf("insira um caractere de 3 digitos");
    scanf("%d",&num);

    uni = num % 10;
    dez = (num / 10) % 10;
    cent = num / 100;
    
    printf("o numero inicial de 3 digitos é %d e seu inverso é %d%d%d",num,uni,dez,cent);



    return 0;


}
