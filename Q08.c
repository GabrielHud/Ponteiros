#include <stdio.h>
int main(void){
	int mat[4] = {1, 2, 3, 4};
	int *p, x;
	
	p = mat + 1;
	printf("%p \n", p);

	p = mat;
	printf("%p \n", p);

	p = mat;
	printf("%p \n", p);

	//p = (*mat);
	//printf("%p \n", p);
	
	//Respostas:
	//A primeira expressão é válida, retornando o local da memória daquele elemento do vetor.
	//A segunda expressão é válida, retornando o local da memória daquele elemento do vetor.
	//A terceira(idêntica a segunda) expressão é válida, retornando o local da memória daquele elemento do vetor.
	//A quarta expressão não é válida, pois a sintaxe está incorreta.
	//As três primeiras expressões estão corretas.

	return(0);	
}
