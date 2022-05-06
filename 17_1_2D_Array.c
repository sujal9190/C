#include<stdio.h>
int main()
{
  int A[10][10]={{11,22,33},{44,55,66},{77,88,99},{23,45,67}};
	
	 int i,j;
	 
	 for(i=0;i<4;i++)
	 {
	 	for(j=0;j<3;j++)
	 	{
	 		printf("\t A[%d][%d]=%d",i,j,A[i][j]);
		 }
	 	printf("\n");
	 }
}
