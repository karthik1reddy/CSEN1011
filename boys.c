#include<stdio.h>
void main()
{
 int boys,girls,x,b=1,n,g=1;
 printf("Enter number of girls : ");
  scanf("%d",&girls);
    printf("Enter number of boys : ");
     scanf("%d",&boys);
   for(x=1;x<=boys;x++){
   b=b*x;
}
  for(n=boys+1;n>=(boys-girls+1);n--){
    g=g*n;
}
  printf("Total: %d\n\n",(b*g));
  
}

