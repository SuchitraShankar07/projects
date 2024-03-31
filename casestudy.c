#include <stdio.h>
#include <strings.h>
#include "functionmodule.c"

void createaccount();
void checkbalance(int* pbal);
void depositmoney(int* pbal);
void withdrawmoney(int* pbal);
void displaydetails();


int main(void)
{	int bal=0;
	int* pbal=&bal;
	int bigt=1;
	char rflag;
	while (bigt==1)
	{

	printf("WELCOME TO PES BANK!! ARE YOU?\n 1. a new customer\n 2. an existing customer\n3.Exit.\n");
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
			createaccount();
			break;
		}
		else
		{
			printf("Till we meet again! See you soon!");
			break;
		}
	}
	case 2:
	{
		//printf()
		//printf("Enter password");
		//code for checking password to be implemented after files are introduced
		int t=1;
		char flag;
		while(t==1)
		{
			printf("WELCOME TO PES BANK!! CHOOSE YOUR PREFERRED ACTION:\n");
			printf("1. Check my balance\n");
			printf("2. Deposit money into my account\n");
			printf("3. Make a withdrawal\n");
			printf("4. Display my account details");
			printf("5. Exit the program\n");
			printf("Enter the serial number of the action you wish to perform\n");
			int ser;
			

			scanf("%d%*c", &ser);
			switch(ser)
			{
				
				case 1:
				{
					checkbalance(pbal);
					break;
				}
				case 2:
				{
					depositmoney(pbal);
					break;
				}
				case 3:
				{
					withdrawmoney(pbal);
					break;
				}
				case 4:
				{
					displaydetails();
					break;
				}
				case 5:
				{
					printf("Thank you for visiting PES Bank! Come again soon :)");
					break;
				}
				default:
				printf("Invalid input.\n Please choose an option between 1 and 6\n");
			}
		t=0;
		printf("Do you wish to perform a different action?(Y/N)\n");
		scanf("%c%*c", &flag);
			if(flag=='Y'||flag=='y')
			{
				t=1;
			}

		}
	}
	case 3:
	break;
	
	}

bigt=0;
printf("Do you wish to perform a different actionn?(Y/N)\n");
	scanf("%c%*c", &rflag);
	if(rflag=='Y'||rflag=='y')
	{
		bigt=1;
	}
printf("-------------------------------------------------------------------------\n");
	}}