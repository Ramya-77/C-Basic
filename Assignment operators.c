#include<stdio.h>
void main()
{
	int a, b;
	printf("give numbers to a and b");
	scanf("%d%d", &a, &b);
	printf("a is %d and b is %d\n", a,b, a+=b);
	printf("a is %d and b is %d\n", a,b, a-=b);
	printf("a is %d and b is %d\n", a,b, a*=b);
	printf("a is %d and b is %d\n", a,b, a/=b);
	printf("a is %d and b is %d", a,b, a%=b);
}
