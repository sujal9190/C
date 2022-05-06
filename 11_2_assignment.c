#include<stdio.h>
int main(){
	int y;
	printf("Enter the year for check\n\t:-");
	scanf("%d",&y);
	
	if((y%4==0)&&(y%100!=0)||(y%400==0))
	{
		printf("leep year");
	}
	else
	{
		printf("not the leep year");
	}
}