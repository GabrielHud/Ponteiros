#include <stdio.h>
int main(){
	int vet[] = {4,9,13};
	int i;
	
	for(i=0;i<3;i++){
		printf("%d ",*(vet+i));
	}
	
  	for(i=0;i<3;i++){
  		printf("%X ",vet+i);
  	}
	//Respostas:
	//O primeiro la�o for retorna os valores guardados nos locais da mem�ria onde os componentes do vetor est�o armazenados, ou seja, os proprios componentes do vetor.
	//O segundo la�o for retorna o local na mem�ria onde os componentes do vetor est�o armazenados.

	return(0);	
}
