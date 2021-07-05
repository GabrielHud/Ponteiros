#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
int main (void) {
	int i=3,j=5;
	int *p, *q;
	p = &i;
	q = &j;
	
	bool a;
	a = (p == &i);
	printf("Resposta do item a: %i \n", a);

	int b;
	b = *p - *q;
	printf("Resposta do item b: %d \n", b);

	int c;
	c = **&p;
	printf("Resposta do item c: %d \n", c);

	int d;
	d = 3 - *p/(*q) + 7;
	printf("Resposta do item d: %d \n", d);

	//Respostas:
	//Será impresso os valores 1(true), -2, 3 e 10.
	return 0;
}
