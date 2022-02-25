#include <stdio.h>
#include<stdio.h>
#include<string.h>
int main(){
struct customer {
  
char name[15];
  
int money;
  

 char mobile_number[10];
 }x[2];
  for(int a=0;a<2;a++){
  scanf("%s",x[a].name);
  scanf("%d",&x[a].money);
  if(x[a].money<0){
  printf("Invalid amount");
  return 0;
   }
   scanf("%s",x[a].mobile_number);
  
   if(strlen(x[a].mobile_number)!=10){
  
  printf("Invalid mobile number");
  
  return 0;
   }
  int p=0;
  
  while(x[a].mobile_number[p]!='\0'){
  
 if(x[a].mobile_number[p]>='0' && x[a].mobile_number[p]
   <='9')
  p+=1;
  else{
  
  printf("Invalid entry");
  return 0;
  
     }
   }

  }
  int i=x[0].money+x[1].money;
  
  printf("Total amount of two customers=%d",i);
  
}

