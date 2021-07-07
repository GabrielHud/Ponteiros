#include <stdio.h>
#include <stdlib.h>

int somaVetor(int *x1, int *y1, int *w1, int n1){
	int i;
	for (i = 0; i < n1; i++){
		w1[i] = x1[i] + y1[i];
	}
	return *w1;
}
int main(){
	int i, n, *x, *y, *w;
	
	printf("Informe o numero de componentes dos vetores: ");
	scanf("%d", &n);
		
	x = malloc(n * sizeof(int));
	y = malloc(n * sizeof(int));
	w = malloc(n * sizeof(int));
	
	for (i = 0; i < n; i++){
		printf("Valor na posicao %d do vetor x: ", i+1);
		scanf("%d",&x[i]);
	}
	for (i = 0; i < n; i++){
		printf("Valor na posicao %d do vetor y: ", i+1);
		scanf("%d",&y[i]);
	}
	
	somaVetor(x, y, w, n);
	
	for (i = 0; i < n; i++){
    	printf("%d \n",w[i]);
  	}

	return(0);	
}
