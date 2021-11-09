#include<stdio.h>
void main()
{
	int p,q,r,s,t;
	printf("enter four numbers");
	scanf("%d%d%d%d", &p, &q, &r, &s);
	t = p*q*r*s;
	printf("product of %d, %d, %d and %d is: %d", p,q,r,s,t);
	
}
