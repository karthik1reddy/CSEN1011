#include<stdio.h>
int main()
{
	int rows,i,j,n=1;
	printf("enter the number of rows:");
	scanf("%D",&rows);
	for (i=1;i<=rows;i++)
	{
		for (j=1;j<=i;j++)
		{
		printf("%d ",n);	
		n++;
		}
		printf("\n");
	}
	return 0;
}