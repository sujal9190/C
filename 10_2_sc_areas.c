#include<stdio.h>
int main(){
	float pi=3.14,r,h,b,s,y,z;
	int ch;
	printf("enter '1' for area of circle\n");
	printf("enter '2' for area of Triangle\n");
	printf("enter '3' for area of square\n");
	printf("enter '4' for area of rectangle\n");
	
	scanf("%d",&ch);
	
	switch (ch){
		case 1:
			printf("Enter the radious\n:-");
			scanf("%f",&r);
			printf("Area of Circle is =%f",(pi*r*r));
			break;
		
		case 2:
			printf("Enter the hight of Triangle \n\t:-");
    		scanf("%f",&h);
    		printf("\nEnter the base of Triangle \n\t:-");
    		scanf("%f",&b);
			printf("area of Triangle is =%f",(0.5*h*b));
			break;

		case 3:
			printf("Enter the length of square \n\t:-");
			scanf("%f",&s);
			printf("Area of Square is =%f",(s*s));
			break;

		case 4:
			printf("Enter the length of rectangle \n\t:-");
			scanf("%f",&y);
			printf("Enter the breadth of rectangle \n\t:-");
			scanf("%f",&z);
			printf("Area of Square is =%f",(y*z));
			break;

	}
	
}
