#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,sum=0;
printf("Enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("sum of n number is %d",sum);
return 0;
}
