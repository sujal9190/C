#include<stdio.h>
int main(){
	printf("Enter the three numbers for find the greater number");
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	
	if((a>b)&&(a>c)){
		printf("'a' is the greater number");
	}
	else if((b>a)&&(b>c)){
		printf("'b' is the greater number");
	}
	else if((a==b)&&(a==c)&&(b==c)){
		printf("All numbers are same");

	}
	else{
		printf("'c' is the greater number");
	}

}
