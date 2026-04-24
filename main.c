#include <stdio.h>

int main()
{
    int numeros[5] = {10,20,30,40,50};
    int i;
    
    numeros[3] = 45;
    printf("%d\n", numeros[2]);
    
    for(i=0; i<5; i++){
        printf("numeros[%d] = %d\n", i, numeros[i]);
    }

    return 0;
}