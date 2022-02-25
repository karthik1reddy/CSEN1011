#include<stdio.h>
int main ()
{
   int A,B,C,D,solution;
   printf("enter the first row and first column");
   scanf("%d %d ",&A,&B);
   printf("enter the second row and second column");
   scanf("%d %d",&C,&D);
   solution=A+B+C+D;
   if(solution%2==0)
   {
        printf("True");
    }
     else
     {
            printf("False");
        }
            
            
    
}
