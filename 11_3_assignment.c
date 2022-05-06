#include<stdio.h>
int main(){
	int x,y,z;
	printf("Enter the length of triangle\n:-");
	scanf("%d %d %d",&x,&y,&z);
	
	if((x==y)&&(y==z)){
		printf("This is the equelatral Triangle");
	}
	else if((x==y)||(y==z)||(z==x)){
		printf("This is the isoscale Triangle");
	}
	else{
		printf("This is the scaler Triangle");
	}
}
