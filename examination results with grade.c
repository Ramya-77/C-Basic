/*Examination Results with grade*/
#include<stdio.h>
void main()
{
	int eng, mat, phy, che, cs, total,percentage;
	printf("enter marks of 5 subjects");
	scanf("%d%d%d%d%d", &eng,&mat,&phy,&che,&cs);
	total=eng+mat+phy+che+cs;
	percentage = total/5;
	if(eng>=35&&mat>=35&&phy>=35&&che>=35&&cs>=35)
	{
		printf("student pass\n");
		printf("%d\n",percentage);
	
	if(percentage >=90)
	{
		printf("O");
	}
	else if(percentage >=80 )
	{
		printf("A");
	}
	else if(percentage >=70 )
	{
		printf("B");
	}
	else if(percentage >=60 )
	{
		printf("C");
	}
	else if(percentage >=50 )
	{
		printf("D");
	}
	else
	{
		printf("E");
	}
}
	else
	{
		printf("student fail");
	}
	
}
