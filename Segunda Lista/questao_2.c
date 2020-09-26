#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    int numero;
    do{
        printf("Digite um número maior que 0:\n ");
        scanf("%d", &numero);
        if (numero <=0){
            printf("O número digitado é inválido.\n");
        }
    }while(numero <= 0);

    if (numero == 1){
        printf("%d! = ", numero);
    }
    for(int i = numero - 1; i > 0; i--){
        if (i == numero - 1){
            printf("%d! = %d * ", numero, numero);
        }
            numero = numero * i;
        if (i > 1){
            printf("%d * ", i);
        }
        else{
        printf("%d = ", i);
        }
    }
    printf("%d",numero);


return 0;
}
