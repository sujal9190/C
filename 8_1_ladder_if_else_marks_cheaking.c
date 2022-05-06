#include<stdio.h>
int main(){
	float m;
	printf("Enter the marks\n\t:-");
	scanf("%f",&m);
	
	if(m>95){
		printf("You are topper");
	}
	else if(m>90){
		printf("exellent");
	}
	else if(m>80){
		printf("vary good");
	}
	else if(m>70){
		printf("good");
	}
	else if(m>60){
		printf("nice");
	}
	else if(m>40){
		printf("avrage");
	}
	else {
	printf("fail");
	}
}