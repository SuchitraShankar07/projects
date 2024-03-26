#include <stdio.h>
#include <strings.h>
#include "functionmodule.c"
int createaccount();
int checkbalance();
int depositmoney();
int withdrawmoney();

int main(void)
{
	printf("WELCOME TO PES BANK!! ARE YOU?\n 1. a new customer\n 2. an existing customer\n");
	int a;
	scanf("%d",&a);
	getchar();
	switch(a)
	{	
	case 1:
	{
		printf("Would you like to make an account?(Y/N)");
		char ch;
		scanf("%c", &ch);
		getchar();
		if ((ch=='Y')|(ch=='y'))
		{
			//createaccount();
			break;
		}
		else
		{
			printf("Till we meet again! See you soon!");
			break;
		}
	}
	case 2:{
		printf("WELCOME TO PES BANK!! CHOOSE YOUR PREFERRED ACTION:\n");
		printf("1. Check my balance\n");
		printf("2. Deposit money into my account\n");
		printf("3. Make a withdrawal\n");
		printf("4. Exit the program\n");
		printf("Enter the serial number of the action you wish to perform\n");
		int ser;
		scanf("%d", &ser);
		switch(ser)
		{
		
		case 1:
		{
			//checkbalance();
			break;
		}
		case 2:
		{
			//depositmoney();
			break;
		}
		case 3:
		{
			//withdrawmoney();
			break;
		}
		case 4:
		{
			//exitprogram();
			break;
		}
		default:
		printf("Invalid input.\n Please choose an option between 1 and 6\n");
	}}}
}


