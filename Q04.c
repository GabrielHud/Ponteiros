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
	//Item a é legal, item b é ilegal e não pode ser comparado(por um ser ponteiro e outro um inteiro),
	//item c é legal, item d é ilegal, não existe a expressão que está entre parênteses(*&), já que n tem uma variavel pra executar as funções,
	//item e é ilegal, pois os valores são diferentes, um é em relação a i e a outra em relação a j(no meu exemplo i=3 e j=5),
	//item f é ilegal, mais uma comparação de inteiro com ponteiro, item g é ilegal, mais uma comparação de inteiro com ponteiro,
	//item h é ilegal, pois os valores são diferentes, um se refere a i e o outro se refere a i + j.
	//Os itens ilegais são b, d, e, f, g e h.

	return 0;
}
