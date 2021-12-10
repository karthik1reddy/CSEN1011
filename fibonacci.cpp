#include<stdio.h>
int main(){
    int n1,n2,n3,sum,i;
    n1=0;
    n2=1;
    printf("%d ",n1);
    printf("%d ",n2);
    for(i=3;i<=20;i++){
       n3=n1+n2;
       n1=n2;
       n2=n3;
       printf("%d ",n3);
    }
    return 0;
}