/* sum_of_digits
Assignment of Lab 05
Name: Syed Anwer
Section: BAI-1A
Roll no: 24k-0033
Question: Create a program that calculates the sum of digits of a number until the result is a single digit
*/
#include<stdio.h>

int main(void){
	long long int sum=0;
	long long int num=0;
	
	printf("\nEnter number to sum the digits provided: ");
	scanf("%lld",&num);	
	printf("\n");
	while(num>0){
		sum = sum + (num%10);
		num = num/10;

		
	}//end while
		printf("%lld",sum);
	
	

	
}//end main function