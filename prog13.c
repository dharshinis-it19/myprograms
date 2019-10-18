#include<stdio.h>
int main()
{
int x,i;
printf("Enter a number");
scanf("%d",&x);
for(i=1;i<=10;i++)
{
  printf("\n %d * %d = %d",i,x,x*i);
}
return 0;
}
