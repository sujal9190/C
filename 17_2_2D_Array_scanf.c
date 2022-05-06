#include<stdio.h>
int main()
{
    int A[10][10];
    int i,j,c,r;
    printf("Enter the size of row and cln");
    scanf("%d %d",&r,&c);
    printf("Enter the values of Array");
    
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{	
    		scanf("%d",&A[i][j]);
		}
		printf("\n");
	}
    
   printf("\n values \n");
   
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		printf("\t A[%d][%d]=%d",i,j,A[i][j]);
		}
		printf("\n ");
	}
}