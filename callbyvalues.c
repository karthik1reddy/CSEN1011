#include<stdio.h>
int swap(int *x, int *y){
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
  printf("After swapping %d %d",*x,*y);
}
int main()
{
  
  int a,b;
  printf("Before swapping %d %d",a,b);
  printf("\n");
  swap(&a,&b);
}