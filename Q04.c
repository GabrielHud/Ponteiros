#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
int main(){
	int i=3, j=5;
	int *p, *q;
	p = &i;
	q = &j;
	
	bool a;
	a = (p == &i);
	printf("Item a: %i \n", a);
	
	//bool b;
	//b = (*q == &j);
	//printf("Item b: %i \n", b);
	
	bool c;
	c = (p == &*&i);
	printf("Item c: %i \n", c);
	
	//bool d;
	//d = (i == (*&)j);
	//printf("Item d: %i \n", d);
	
	bool e;
	e = (i == *&j);
	printf("Item e: %i \n", e);
	
	//bool f;
	//f = (i == &&j);
	//printf("Item f: %i \n", f);
	
	//bool g;
	//g = (q == *p);
	//printf("Item g: %i \n", g);
	
	bool h;
	h = (i == (*p) + *q);
	printf("Item h: %i \n", h);

	//Respostas:
	//Item a � legal, item b � ilegal e n�o pode ser comparado(por um ser ponteiro e outro um inteiro),
	//item c � legal, item d � ilegal, n�o existe a express�o que est� entre par�nteses(*&), j� que n tem uma variavel pra executar as fun��es,
	//item e � ilegal, pois os valores s�o diferentes, um � em rela��o a i e a outra em rela��o a j(no meu exemplo i=3 e j=5),
	//item f � ilegal, mais uma compara��o de inteiro com ponteiro, item g � ilegal, mais uma compara��o de inteiro com ponteiro,
	//item h � ilegal, pois os valores s�o diferentes, um se refere a i e o outro se refere a i + j.
	//Os itens ilegais s�o b, d, e, f, g e h.

	return 0;
}
