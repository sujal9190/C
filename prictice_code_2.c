#include<stdio.h>
int main(int argc, char const *argv[])
{
	char name[100], surname[100], username[100], pass[100], pass2[100];
	printf("This is the login program\n");
	printf("Enter your first name\t:-");
	gets(name);
	printf("Enter your surname\t:-");
	gets(surname);
	printf("creat the username\t:-");
	gets(username);
	printf("Create a password\t:-");
	gets(pass);

	printf("This is your details\n");
	printf("your name is :- %s %s\nThis is user name :- %s\n",name,surname,username);

	printf("Enter password once\t");
	gets(pass2);
	if (pass==pass2)
	{
		printf("Login success");
	}
	else
	{
		printf("Login Fail");
	}
	


}
