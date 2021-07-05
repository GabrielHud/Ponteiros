#include <stdio.h>
int main(){
	//Respostas:
	//x declarado como char:
	//x+1=4093, x+2=4094, x+3=4095.
	//x declarado como int:
	//x+1=4094, x+2=4096, x+3=4098.
	//x declarado como float:
	//x+1=4096, x+2=4100, x+3=4104.
	//x declarado como double:
	//x+1=4100, x+2=4108, x+3=4116.
	
	char vet1[4] = {'a', 'b', 'c', 'd'};
	int vet2[4] = {1, 2, 3, 4};
	float vet3[4] = {1.1, 2.2, 3.3, 4.4};
	double vet4[4] = {1.11111, 2.22222, 3.33333, 4.44444};
	int i;
	
  	for(i=0;i<3;i++){
  		printf("%X ",vet1+i);
  	}
  	printf("\n");
  	
  	for(i=0;i<3;i++){
  		printf("%X ",vet2+i);
  	}
  	printf("\n");

  	for(i=0;i<3;i++){
  		printf("%X ",vet3+i);
  	}
  	printf("\n");
  	
  	for(i=0;i<3;i++){
  		printf("%X ",vet4+i);
  	}
  	printf("\n");

	//Respostas:
	//As respostas estão de acordo com o esperado, exceto no caso do tipo int, que na minha máquina ocupa 4 bytes, não 2 bytes como no enunciado.
	
	return(0);	
}
