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
	//Item a v�lido, item b v�lido, item c invalido, tipos de vari�vel incompat�veis, item d v�lido, item e v�lido,
	//item f inv�lido, incompatibilidade de vari�veis, item g inv�lido, tentando armazenar um vetor em um float, item h v�lido.
	
	return(0);	
}
