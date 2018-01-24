#include<stdio.h>
#include<conio.h>
int main()
{
int n,count=0;
printf("Enter the number");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
count++;
}
printf("no of digit is %d",count);
return 0;
}
