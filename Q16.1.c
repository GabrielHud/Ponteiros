#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int comparar(const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(void){
	clock_t t;
	t = clock();

	int i, n = 5000;
	float *x;
	
	x = malloc(n * sizeof(float));
	
	for (i = 0; i < n; i++){
		x[i] = i+1;
	}	
	
	qsort(x, n, sizeof(float), comparar);
	
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
