#include<stdio.h>
void main()
{
	char a, b, c, d, e;
	printf("enter five characters");
	scanf("%c%c%c%c%c", &a,&b,&c,&d,&e);
	printf("%d %d %d %d %d", a-95,b-95,c-95,d-95,e-95);
}
