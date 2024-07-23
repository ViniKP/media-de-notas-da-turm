#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int contador, nota, total;
	float media;
	
	total = 0;
	contador = 0;
	
	printf ("Digite a nota ou -1 para finalizar: ");
	scanf("%d", &nota);
	
	while(nota != -1){
		total = total + nota;
		contador = contador + 1;
		
		printf ("Digite a nota ou -1 para finalizar: ");
		scanf("%d", &nota);
	}
	
	if(contador != 0 ){
		media = (float) total / contador;
		printf("Média da turma é %.2f\n", media);
	}
	else {
		printf("Nenhuma nota foi informada");
	}
	
	return 0;
}
