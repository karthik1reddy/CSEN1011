#include<stdio.h>
int main()
{
  int n,s=0;
  printf("enter the number");
  scanf("%d",&n);
  for(int i=1;i<n;i++)
  {
    if((n%i)==0)
   {
    s=s+i;
   }
  
  }
  if(n==s)
  printf("the number is perfect");
  else
  printf("not a perfect number");
}
