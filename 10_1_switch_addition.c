#include<stdio.h>
int main(){
	int a,b,ch;
	printf("Enter two value\n");
	scanf("%d %d",&a,&b);
	
	printf("Enter '1' for add\nEnter '2' for sub\nEnter '3' for mul\nEnter '4' for div\n");
	scanf("%d",&ch);
	switch (ch){
		case 1:
			printf("Addition =%d",(a+b));
			break;

		case 2:
			printf("substraction =%d",(a-b));
			break;

		case 3:
			printf("multiplication =%d",(a*b));
			break;
		
		case 4:
			printf("division =%d",(a/b));
			break;
	}
}