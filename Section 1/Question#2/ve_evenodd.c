/*
Assignment of Lab 05
Name: Syed Anwer
Section: BAI-1A
Roll no: 24k-0033
Question: Create a program that determines if a number is positive, negative, or zero, and if it’s positive, checks if it’s an even or odd number.
*/
#include<stdio.h>

int main(void){
	int num;
	printf("Enter any number: ");
	scanf("%d",&num);
	printf("\n");
	
	if(num<0){
		printf("The number is negative.\n");
	}//end if 1
	
	else if(num>0){
		printf("The number is postive.\n");
		
		if(num%2==0){
			printf("The number is even.\n");
		}//end if inner 1
		
		else{
			printf("The number is odd.\n");
		}//end else inner 1
	
	}//end else-if outer 1

	else {
		printf("Zero.\n");
	}//end else 1


	}//end main function
