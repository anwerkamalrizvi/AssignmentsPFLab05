/* greatest_of_3
Assignment of Lab 05
Name: Syed Anwer
Section: BAI-1A
Roll no: 24k-0033
Question: Write a program to find the greatest of three numbers using nested if-else statements.
*/
#include<stdio.h>

int main(void){
	int num1,num2,num3;
	printf("\t\t\t\tGREATEST OF THREE NUMBERS\n\n");
	
	printf("Enter number 1:");
	scanf("%d",&num1);
	
	printf("\nEnter number 2:");
	scanf("%d",&num2);

	printf("\nEnter number 3:");
	scanf("%d",&num3);
	
	printf("\n");
	if(num1>num2){
		if(num1>num3){
			printf("%d is greatest.\n",num1);
		}//end if inner 1
	
		else{
			printf("%d is greatest.\n",num3);
		}//end else inner 1
	
	}//end if outer 1
	
	else if(num3>num2){
		printf("%d is greatest.\n",num3);
		
	}//end else if outer 1
	else if(num2>num3){
		printf("%d is greatest. \n",num2);
	}//end else if outer 2
	
	
	if(num2==num3&&num2==num1&&num1==num3){
		printf("Both are equal.");
	}//end if outer 2	
	return 0;



}//end main function
