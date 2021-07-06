#include <stdio.h>
#include <stdlib.h>

//função que compara dois elementos qque vem do vetor
int comparar(const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(void){
	//Váriaveis
	int i, n;
	float *x;

	//Recebe quantos elementos seram alocados no vetor
	printf("Informe o numero de componentes do vetor: ");
	scanf("%d", &n);
	
	//alocação dinâmica de memória	
	x = malloc(n * sizeof(float));
	
	//Recebe os valores de cada elemento do vetor
	for (i = 0; i < n; i++){
		printf("Valor na posicao %d do vetor: ", i+1);
		scanf("%f",&x[i]);
	}	
	
	//Função pra ordenar em ordem crescente o vetor
	qsort(x, n, sizeof(float), comparar);
	
	//Imprime os valores já em ordem crescente
	printf("Valores em ordem crescente: ");
	for (i = 0; i < n; i++){
    	printf("%f ",x[i]);
  	}
	
	//Esvazia o local na memória virtual que foi utizado na função malloc
	free(x);
	
	return(0);	
}
