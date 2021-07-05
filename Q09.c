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
	//O primeiro laço for retorna os valores guardados nos locais da memória onde os componentes do vetor estão armazenados, ou seja, os proprios componentes do vetor.
	//O segundo laço for retorna o local na memória onde os componentes do vetor estão armazenados.

	return(0);	
}
