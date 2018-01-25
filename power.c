#include<stdio.h>
#include<conio.h>
int main()
{
int base,power,s=1;
scanf("%d",&base);
scanf("%d",&power);
while(power!=0)
{
s=s*base;
power--;
}
printf("power of given number is%d",s);
return 0;
}
