#include <stdlib.h>
#include <stdio.h>
int main(){
	int i=5, *p;
	p = &i;
	printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);

	//Respostas:
	//Será impresso os valores 4094, 7, 5, 15 e 9.

	return 0;
}
