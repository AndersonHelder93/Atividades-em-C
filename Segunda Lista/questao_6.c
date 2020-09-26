#include <stdio.h>
#include <stdlib.h>

int main() {
    int qtd, razao;
    int pg = 1;

    printf("Digite a quantidade de elementos de uma PG: \n");
    scanf("%d", &qtd);
    printf("Digite o valor da razao da PG: \n");
    scanf("%d", &razao);

    for(int i=1; i < qtd; i++){
        if (i == 1){
          printf("%d, ", i);
        }

        pg *= razao;

        if(i == qtd-1){
          printf("%d.", pg);
        }else{
           printf("%d, ", pg);
        }

    }
  return 0;
}
