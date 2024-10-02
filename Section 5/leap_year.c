/* leap_year
Assignment of Lab 05
Name: Syed Anwer
Section: BAI-1A
Roll no: 24k-0033
Question: Write a program that checks if a year is a leap year using the modulus operator.
*/
#include<stdio.h>

int main(void){
	int year;
	printf("Enter Year: ");
	scanf("%d",&year);
	printf("\n");
	
	if(year%400==0){
		printf("Leap Year!!");
	}//end if 1
	
	else if(year%100!=0 && year%4==0){
		printf("Leap Year!!");			
        }//end else if 1
		
	else{
		printf("Absolutely NOT a leap year.");
	}//end else 1

	return 0;
}//end main function