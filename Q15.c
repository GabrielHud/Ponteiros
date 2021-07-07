#include <stdio.h>
#include <stdlib.h>

float comparar(int n2, float *y) {
	int i, j;
	float aux;
	
	for (i = 0;i < n2; i++){
		for (j = i+1; j < n2; j++){
			if(y[i] > y[j]){
				aux = y[i];
				y[i] = y[j];
				y[j] = aux;
			}
		}
	}	
	return (*y);
}

int main(void){
	int i, n;
	float *x;
	
	printf("Informe o numero de componentes do vetor: ");
	scanf("%d", &n);
	
	x = malloc(n * sizeof(float));
		
	for (i = 0; i < n; i++){
		printf("Valor na posicao %d do vetor: ", i+1);
		scanf("%f",&x[i]);
	}
	
	comparar(n, x);
	
	printf("Valores em ordem crescente: ");
	
	for (i = 0; i < n; i++){
    	printf("%f ",x[i]);
  	}
	
	free(x);
	return(0);	
}

