/*
Assignment of Lab 05
Name: Syed Anwer
Section: BAI-1A
Roll no: 24k-0033
Question: Write a program that categorizes a person's age into different life stages: Child, Teenager, Adult, and Senior using nested if-else statements.
*/
#include<stdio.h>

int main(void){
	int age;
	printf("Enter the age: ");
	scanf("%d",&age);
	printf("\n");

	if(age<4&&age>0){
		printf("The person's stage is baby.");
	}//end if 1

	else if(age>4&&age<=12){
		printf("The person's stage is child.");
	}//end if else 1

	else if(age>=13&&age<=18){
		printf("The person's stage is teenager.");
	}//end if else 2

	else if(age>=19&&age<=39){
		printf("The person's stage is adult.");
	}//end if else 3

	else if(age>=40&&age<=59){
		printf("The person's stage is middle adult.");
	}//end if else 4

	else if(age>=60&&age<=120){
		printf("The person's stage is senior.");
	}//end if else 5

	else if(age<0||age>=121){
		printf("Invalid input.");
	}//end if else 6
	return 0;



}//end main function