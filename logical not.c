#include<stdio.h>
void main()
{
	int a, b;
	a = 9;
	b = 7;
	printf("%d\n", !(a<b));
	printf("%d\n", !(a<b));
	printf("%d\n", !(a<b) && (a>b));
	printf("%d\n", !(a>b) || (a<b));
	printf("%d\n", !((a<b) || (a>b)));
}
