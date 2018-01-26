#include<stdio.h.
#include<conio.h>
void main()
{
 int i,fir,last,j;
  printtf("enter the first");
  scanf("%d",&fir);
  printf(" enter the last");
  scanf("%d",&last);
  for(i=fir;i<last;i++)
  
  {
  for(j=2;j<i;j++)
  {
  	
  
  	if((i%j)==0)
  	{
  	break;
  	}
  	else
  		if(i==j+1)
  		
  		{
  		    printf("%d is prime",i);
  		}
      }
      }
      getch();
  }
