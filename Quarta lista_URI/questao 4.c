#include <stdio.h>

int main(){
    int numero, n2, R, i;
    printf(" ");
    scanf("%d %d",&numero, &n2);
    if(numero > n2){
    for(numero=1;numero <=5;numero++){
             printf("%d",numero);
        }
    for(numero=5;numero>0;numero--){
         printf("%d",numero);
        }
    }else if(numero < n2 ){
        R = n2-numero;
        for(i=numero; i<=n2;i++){
           printf("%d", i );
        }
        for(numero=n2;numero>numero;numero--){
        printf("%d", numero );
        }
    }

return 0;
}
