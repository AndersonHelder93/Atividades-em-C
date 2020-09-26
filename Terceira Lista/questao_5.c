#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char texto[50];
    printf("Digite uma palavra: ");
    scanf("%s", texto);

    for (i = 0; texto[i] != '\0'; i++){}
    i--;
    for (int j = 0; j< i; j++){
        if(toupper(texto[j]) != toupper(texto[i])){
            printf("Nao eh um palindromo!");
            return 0;
        }
        i--;
    }
    printf("Eh um palindromo!");
    return 0;
}
