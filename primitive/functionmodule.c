
#include <stdio.h>
#include "curses.c"

char username[50];
char userid[10];
char gender;
int aadhar[12];
unsigned age;
char pass[10];

void createaccount()
{
printf("Enter your name\n");
fgets(username, 50, stdin);
printf("Enter a password\n");


for(int i=0;i<10;i++)
    {
        pass[i]=mygetch();
        if(pass[i]=='\n')
        {
            pass[i]='\0';
            break;
        }
        else
        {
            printf("*");
        }
}
printf("\n");
printf("KYC process:\n");
printf("Enter your Gender(M/F/P),M = male, F = Female ,P= prefer not to say\n");
scanf("%c", &gender);

printf("Enter your age(in numbers)\n");
scanf("%d",&age);
printf(("Enter your Aadhar number( 12 digits, each digit in a new line):\n"));
    for (int i = 0; i < 12; i++) {
        scanf("%d", &aadhar[i]);}
        
printf("Thank you for making an account with PES Bank! Feel free to contact our branch manager for any assistance required.\n");
printf("______________________________________________________________________________________________________________________________________________\n");
}


void displaydetails()
{
    printf("User name:%s\n", username);
    //printf("userId:%s\n", userid); will be updated after structs are used
    if (gender=='F'||gender=='f') {
    printf("Gender: Female\n");
    }
    else if (gender=='M'||gender=='m') {
        printf("Gender: Male\n");
    }
    else {
    printf("Gender not disclosed\n");
    }
printf("Aadhar:");
    for(int i=0; i<12; i++)
    {
        printf("%d", aadhar[i]);
    }
    printf("\nAge:%d\n", age);
}

void checkbalance(int* pbal)
{
printf("You have Rs.%d in your account\n", *pbal);
}


void depositmoney(int* pbal)
{
    int dep;
printf("Enter amount to be deposited\n");
scanf("%d", &dep);
if (dep<=0)
{
    printf("Invalid amount\n");
}
else {
*pbal+=dep;
}
printf("You now have Rs. %d in your account\n", *pbal);
}


void withdrawmoney(int* pbal)
{
    if(*pbal>0)
    {
        int with=0;
        printf("How much money would you like to withdraw\n");
        scanf("%d",&with);
        if ((with<*pbal) && (with>0))
        {
            *pbal=*pbal-with;   
            printf("%d withdrawn from account. \nYou now have Rs.%d left in your account\n", with, *pbal);
        }
        else 
        {
        printf("Insufficient funds :(\n");
        }
    }
    else {
    printf("You have zero balance in your account :(\n");
    }
}