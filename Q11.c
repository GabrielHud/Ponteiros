#include <stdio.h>
int main(){
	float aloha[10], coisas[10][5], *pf, value = 2.2;
	int i=3;
	
	aloha[2] = value;
	scanf("%f", &aloha);
	//aloha = "value";
	printf("%f", aloha);
	coisas[4][4] = aloha[3];
	//coisas[5] = aloha;
	//pf = value;
	pf = aloha;

	//Respostas:
	//Item a válido, item b válido, item c invalido, tipos de variável incompatíveis, item d válido, item e válido,
	//item f inválido, incompatibilidade de variáveis, item g inválido, tentando armazenar um vetor em um float, item h válido.
	
	return(0);	
}
