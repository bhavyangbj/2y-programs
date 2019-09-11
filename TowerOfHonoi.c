#include<stdio.h>
void towerofhanoi(int n,char from,char to,char inter)
{
	if(n==1)
	{
		printf("\n disc moved %c to %c ",from,to);
	}
	else
	{
		towerofhanoi(n-1,from,inter,to);
		printf("\n Disc moved %c to %c ",from ,to);
		towerofhanoi(n-1,inter,to,from);
	}
}
void main()
{
	int n;
	printf("\n enter the value of n :");
	scanf("%d",&n);
	towerofhanoi(n,'a','b','c');
}


