#include <stdio.h>

	//Respostas:
	//Um ponteiro pra uma função armazena onde essa função fica na memoria virtual.
int raizQuadrada(int base){
	return base*base;
}
int main(){
	int (*teste) (int) = raizQuadrada;
	printf("Raiz quadrada de 5 = %d", teste(5));

	return(0);	
}
