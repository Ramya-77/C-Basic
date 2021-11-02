/* All arthimetic operators */

#include<stdio.h>
void main()
{
	int a, b, s, d, p, q, r;
	a = 25;
	b = 5;
	
	s = a+b;
	d = a-b;
	p = a*b;
	q = a/b;
	r = a%b;
	
	printf("sum of %d and %d is %d\n:", a, b, s);
	printf("difference between %d and %d is %d\n:", a, b, d);
	printf("product of %d and %d is %d\n:", a, b, p);
	printf("%d divided by %d is %d\n:", a, b, q);
	printf("modulo division of %d and %d is %d:", a, b, r);
}
