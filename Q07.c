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
	//A primeira expressão imprime o terceiro valor.
	//A segunda expressão imprime o quinto valor.
	//A terceira expressão não pode ser executada, pois a sintaxe está incorreta.
	//A quarta expressão não pode ser executada, pois a sintaxe está incorreta.
	//A expressão correta é *(pulo + 2).

	return(0);	
}
