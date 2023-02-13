#include <stdio.h>

int main(){
    
    float x1,x2,x3;
    
    puts("expressão 1: 7+3*6/2-1 ");
    puts("expressão 2: 2%2 + 2*2 - 2/2");
    puts("expressão 3: (3*9 *(3+(9*3/(3))))");
    
    x1 = 7 + 3*6/2-1;
    x2 = 2%2 + 2*2 - 2/2;
    x3 = (3*9 *(3+(9*3/(3))));

    printf("exp 1: %.2f, exp 2: %.2f, exp 3: %.2f,",x1, x2, x3);


    return 0;



}
