#include<stdio.h>
int main()
{
int i,factorial=1,n;
printf("Enter a number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
  factorial=factorial*i;
}
  printf("factorial of %d = %d",n,factorial);
return 0;
}
