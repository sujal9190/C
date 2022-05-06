#include<stdio.h>
int main(int argc, char const *argv[])
{
    int A[100][100];
    int c,r,i,j;
    printf("Enter the size of rows and cln");
    scanf("%d %d\n",&r,&c);
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n");

    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            if (A[0][0]<A[i][j])
            {
                A[0][0]=A[i][j];
            }
            
        }
    }
    printf("%d",A[0][0]);
}