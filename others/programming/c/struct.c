#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct DENEME{
		int a;
		int b;
		char *str;
	}d,e;

	struct DENEME *p;
	p = (struct DENEME*)(malloc(1024*sizeof(struct DENEME)));
	p->str = "asdasdasdasdasdasdads";
	printf("%s\n", (*p).str);

	struct DENEME *g;
	g = &d;

	g->a = 5;
	(*g).str = "asdasdasdasd";

	printf("%s:%d\n", g->str, (*g).a);

	e.str = "qweqwe";

	struct DENEME f;
	f = d;

	printf("%s\n", f.str);


	return 0;
}

// p->a ile (*p).a ayni anlamda kullaniliyor


# ./calistir 
asdasdasdasdasdasdads
asdasdasdasd:5
asdasdasdasd
