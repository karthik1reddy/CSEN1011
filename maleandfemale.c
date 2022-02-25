#include<stdio.h>
void main()
{
 int boys,girls,x,bo=1,n,gi=1;
 printf("Enter number of girls : ");
 scanf("%d",&girls);
 printf("Enter number of boys : ");
 scanf("%d",&boys);
 for(x=1;x<=boys;x++){
  bo=bo*x;
 }
 for(n=boys+1;n>=(boys-girls+1);n--){
  gi=gi*n;
 }
 printf("Total: %d\n\n",(bo*gi));

  
}