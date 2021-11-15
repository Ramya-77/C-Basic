/* program to decode the given numbers */
#include<stdio.h>
void main()
{
	int a,b,c,d,e;
	printf("enter five numbers");
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	printf("%c%c%c%c%c", a+95, b+95, c+95, d+95, e+95);	
}
