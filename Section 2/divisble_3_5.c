/*
Assignment of Lab 05
Name: Syed Anwer
Section: BAI-1A
Roll no: 24k-0033
Question: Write a program that checks if a number is divisible by both 3 and 5 using logical operators.
*/
#include<stdio.h>

int main(void){
	int num;
	printf("Enter any number to check if it is divisible by 3 and 5: ");
	scanf("%d",&num);
	printf("\n");
	
	if(num%3==0&&num%5==0){
		printf("The number is divisible by 3 and 5.");
	}//end if 1
	
	else{
		printf("The number is not divisible by 3 and 5.");
	}//end else 1
	return 0;
	
	
}//end main function