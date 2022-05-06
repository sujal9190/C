#include<stdio.h>
int main(){
	float a,b,*p1,*p2;
	int ch,*p3;
	printf("Enter two value\n");
	scanf("%f %f",&a,&b);
	p1=&a;
	p2=&b;
	p3=&ch;
	
	printf("Enter '1' for add\nEnter '2' for sub\nEnter '3' for mul\nEnter '4' for div\n");
	scanf("%d",&ch);
	switch (*p3){
		case 1:
			printf("Addition =%f",(*p1+*p2));
			break;

		case 2:
			printf("substraction =%f",(*p1-*p2));
			break;

		case 3:
			printf("multiplication =%f",(*p1**p2));
			break;
		
		case 4:
			printf("division =%f",(*p1 / *p2));
			break;
	}
	
}