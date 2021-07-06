#include <stdio.h>
#include <stdlib.h>
int main(void){
	int i, n, j;
	float *x, aux;
	
	printf("Informe o numero de componentes do vetor: ");
	scanf("%d", &n);
		
	x = malloc(n * sizeof(float));
		
	for (i = 0; i < n; i++){
		printf("Valor na posicao %d do vetor: ", i+1);
		scanf("%f",&x[i]);
	}
  
	for (i = 0;i < n; i++){
		for (j = i+1; j < n; j++){
			if(x[i] > x[j]){
				aux = x[i];
				x[i] = x[j];
				x[j] = aux;
			}
		}
	}
	
	printf("Valores em ordem crescente: ");
	
	for (i = 0; i < n; i++){
    	printf("%f ",x[i]);
  	}
	
	free(x);
	return(0);	
}
