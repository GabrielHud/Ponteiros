#include <stdio.h>
int main(void){
	int pulo[5] = {1, 2, 3, 4, 5};
	int p;
	
	p = *(pulo + 2);
	printf("%d \n", p);

	p = *(pulo + 4);
	printf("%d \n", p);

	//p = pulo + 2;
	//printf("%d \n", p);

	//p = pulo + 4;
	//printf("%d \n", p);
	
	//Respostas:
	//A primeira express�o imprime o terceiro valor.
	//A segunda express�o imprime o quinto valor.
	//A terceira express�o n�o pode ser executada, pois a sintaxe est� incorreta.
	//A quarta express�o n�o pode ser executada, pois a sintaxe est� incorreta.
	//A express�o correta � *(pulo + 2).

	return(0);	
}
