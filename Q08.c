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
	//A primeira express�o � v�lida, retornando o local da mem�ria daquele elemento do vetor.
	//A segunda express�o � v�lida, retornando o local da mem�ria daquele elemento do vetor.
	//A terceira(id�ntica a segunda) express�o � v�lida, retornando o local da mem�ria daquele elemento do vetor.
	//A quarta express�o n�o � v�lida, pois a sintaxe est� incorreta.
	//As tr�s primeiras express�es est�o corretas.

	return(0);	
}
