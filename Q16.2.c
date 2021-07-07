#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
	clock_t t;
	t = clock();
	
	int i, n=5000;
	float *x;
	

	
	x = malloc(n * sizeof(float));
		
	for (i = 0; i < n; i++){
		x[i] = i+1;
	}
	
	comparar(n, x);
	
	printf("Valores em ordem crescente: \n");
	
	for (i = 0; i < n; i++){
    	printf("%f \n",x[i]);
  	}
	
	free(x);
	
	t = clock() - t;
	printf("\n Tempo de execucao: %lf", ((double)t)/((CLOCKS_PER_SEC/1000)));
	printf(" milisegundos.");
	
	return(0);	
	
	//Respostas:
	//Ambos tem valores similares, mas o segundo codigo(Q15) apresenta 50 milisegundos a mais de media.
}

