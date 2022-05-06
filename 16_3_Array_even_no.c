#include<stdio.h>
int main()
{
    int i,n,A[10],B[10];
    printf("Enter the size of Array A");
    scanf("%d",&n);
	printf("Enter the values of array A");
    for (i=0; i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    
    
    for ( i = 0; i < n; i++)
    {
    	if(A[i]%2==0)
    	{
    		 printf("\n Array A[%d]=%d",i,A[i]);
		}
    }
}