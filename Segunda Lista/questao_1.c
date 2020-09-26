#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");
    int opcao;
    do{
    printf("====MENU====\n");
    printf("[1] OPCAO\n");
    printf("[2] OPCAO\n");
    printf("[3] OPCAO\n");
    printf("[4] OPCAO\n");
    printf("[5] OPCAO\n");
    printf("[6] OPCAO\n");
    printf("[7] OPCAO\n");
    printf("[8] OPCAO\n");
    printf("[9] OPCAO\n");
    printf("[0] OPCAO\n");

    printf("Digite uma opcao: \n");
    scanf("%d", &opcao);
    switch (opcao){

        case 0:
          printf("\n\n Obrigado por usar o meu programa!!! ");
          break;

        case 1:
          printf("\n\n Opcao escolhida: 1 \n");
          break;

        case 2:
          printf("\n\n Opcao escolhida: 2 \n");
          break;

        case 3:
          printf("\n\n Opcao escolhida: 3 \n");
          break;

        case 4:
          printf("\n\n Opcao escolhida: 4 \n");
          break;

        case 5:
          printf("\n\n Opcao escolhida: 5 \n");
          break;

        case 6:
          printf("\n\n Opcao escolhida: 6 \n");
          break;

        case 7:
          printf("\n\n Opcao escolhida: 7 \n");
          break;

        case 8:
          printf("\n\n Opcao escolhida: 8 \n");
          break;

        case 9:
          printf("\n\n Opcao escolhida: 9 \n");
          break;

        default:
          printf("Opcao invalida\n");
          break;

    }

    }while(opcao!=0);

    return 0;
}
