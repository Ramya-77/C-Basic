//Examination Results
#include<stdio.h>
void main()
{
	int eng, mat, phy, che, cs;
	printf("enter marks of 5 subjects");
	scanf("%d%d%d%d%d", &eng,&mat,&phy,&che,&cs);
	if(eng>=35&&mat>=35&&phy>=35&&che>=35&&cs>=35)
	{
		printf("student pass");
	}
	else
	{
		printf("student fail");
	}
}
