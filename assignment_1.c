#include<stdio.h>
int main(){
	float salary,a;
	printf("Enter Your salary\n\t:-");
	scanf("%f",&salary);
	printf("your salary is %f\n",salary);
	if(salary>1000000){
		printf("You have to pay 24%% income tax\n");
		printf("%f is your income tax ammount",(salary*0.24));
	}
	else if(salary>800000){
		printf("You have to pay 20%% income tax\n");
		printf("%f is your income tax ammount",(salary*0.20));
	}
	else if(salary>600000){
		printf("You have to pay 17%% income tax\n");
		printf("%f is your income tax ammount",(salary*0.17));
	}
	else if(salary>400000){
		printf("You have to pay 12%% income tax\n");
		printf("%f is your income tax ammount",(salary*0.12));
	}
	else if(salary>200000){
		printf("You have to pay 09%% income tax\n");
		printf("%f is your income tax ammount",(salary*0.09));
	}
	else if(salary>100000){
		printf("You have to pay 05%% income tax\n");
		printf("%f is your income tax ammount",(salary*0.05));
	}
	else if(salary>50000){
		printf("You have to pay 02%% income tax\n");
		printf("%f is your income tax ammount",(salary*0.02));
	}
	else if(salary>20000){
		printf("You have to pay 01%% income tax\n");
		printf("%f is your income tax ammount",(salary*0.01));
	}
	else{
		printf("your salary is to low\nYou have not need to pay any income tax ammount");
	}
	
}
