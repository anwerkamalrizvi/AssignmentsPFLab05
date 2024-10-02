/* ternary_ve
Assignment of Lab 05
Name: Syed Anwer
Section: BAI-1A
Roll no: 24k-0033
Question: Use the ternary operator to check if a number is positive, negative, or zero.
*/
#include<stdio.h>

int main(void){
	int num;
	printf("Enter any number: ");
	scanf("%d",&num);

	//Using ternary operator
	(num<0)? printf("Negative."): (num>0)? printf("Positive") :printf("Zero");
	return 0;
	









}//end main function
