#include<stdio.h>
int main()
{
    int i,n,A[10],b[10];
    printf("Enter the size of Array A");
    scanf("%d",&n);
	printf("Enter the values of array A");
    for (i=0; i<n;i++)
    {
        scanf("%d",&A[i]);
    }
	 printf("Enter the values of array b");
    for (i=0; i<n;i++)
    {
        scanf("%d",&b[i]);
    }
   printf("\n values of a \n");
    for (i=0; i<n;i++)
    {
        printf("\t Values if array  A[%d]+B[%d]= %d",i,i,A[i]+b[i]);
    }
    
}
