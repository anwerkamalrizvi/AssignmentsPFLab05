/*
Assignment of Lab 05
Name: Syed Anwer
Section: BAI-1A
Roll no: 24k-0033
Question: Create a program that checks if a person is eligible to vote based on their age and citizenship status.
*/
#include<stdio.h>

int main(int argc, char *argv[]){
	int age;
	char ch; //12

	printf("Enter the age: ");
	scanf("%d",&age);

	printf("\nDo you have citizenship?:(Y/N) \n");
	scanf("%c",&ch);
	scanf("%c",&ch);

	if(age>0&&age<18){
		printf("You are not eligible to vote. \n");
	}//end if 1
	
	else if(age>=18&&age<=120){
		if(ch=='Y' || ch=='y'){
			printf("You are eligible to vote. \n");
		}//end if inner 1

		else if(ch=='N'||ch=='n'){
			printf("Your age is legal But you cannot vote as you don't have the citizenship. \n");
		}//end if else inner 1		
	
		else{
			printf("\nInvalid input!\n");
		}//end else inner 1
	
	}//end if else 1 

	else if(age<0&&age>120){
		printf("Invalid input.\n");
	}//end if else 2 

	
	
	
	
	
	
}//end main function 
