#include<stdio.h>
int main(void)
{
	int a,b,i;
	printf("\nEnter the starting value");
	scanf("%d",&a);
	printf("\nEnter the ending value");
	scanf("%d",&b);
	printf("\nThe even numbers between %d to %d",a,b);
	for(i=a;i<=b;i++)
	{
		if((i%2)==0)
		{
			printf("\n%d",i);
		}
	}
	return 0;
}
 
