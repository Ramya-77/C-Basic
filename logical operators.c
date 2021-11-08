#include<stdio.h>
void main()
{
	
	int a,b,c,d,e,f,g;
	a = 100;
	b = 77;
	c = 43;
	d = (a>b) && (b>c);
	e = (a<b) || (b<c);
	f = (a<b) && (b>c);
	g = (a>b) || (b<c);
	
	
	printf("%d\n", d);
	printf("%d\n", e);
	printf("%d\n", f);
	printf("%d\n", g);
	
}
