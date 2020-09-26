#include <stdio.h>
#include <stdlib.h>

int main()
{
    int e, r;
    printf("Digite a quantidade de elementos de uma PA: \n");
    scanf("%d", &e);
    printf("Digite o valor da razao da PA: \n");
    scanf("%d", &r);

    int pa[e];

for (int i = 0;i < e ; i++) {
    if (i == 0){
        pa[i] = 0;
        printf("%d",pa[i]);
    }
    else{
        pa[i] = pa[i - 1] + r;
        printf(", %d",pa[i]);
    }

}
    return 0;
}
