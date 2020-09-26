#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Digite o valor de ano (ex:1900/1990/2010): \n");
    scanf("%d", &a);

    if(a%4==0){
        printf("Ano %d bisexto, 366 dias\n", a);
    }
    else{
        printf("Ano normal de 365 dias\n");
    }
    return 0;
}
