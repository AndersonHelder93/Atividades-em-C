#include <stdio.h>
#include <stdlib.h>


int main(){
	float t, v, vm;
	printf("Digite o tempo gasto na viagem em horas: ");
	scanf("%f", &t);
	printf("Digite a velocidade média em km/h: ");
	scanf("%f", &v);
	
	vm = (t*v)/12;

	
	printf("o valor eh: %.3f", vm);
	
	return 0;
}
