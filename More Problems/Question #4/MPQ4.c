/* MPQ4 //More Problems Q4
* NAME: SYED ANWER
* SECTION: BAI-1A
* ROLL NO: 24k-0033
* QUESTION: Develop a program that uses logical operators to determine if a person is eligible for a loan
based on age, income, and credit score.
*/

#include<stdio.h>

int Loan(void){

	long long int score, income, age, loan;
	
	printf("\nEnter your income (in Rupees): ");	//income must be greater than Rs.80,000.
	scanf("%lld",&income); 
	
	printf("\nEnter your age (in years): ");	//Age should be greater than 18.
	scanf("%lld",&age);
	
	printf("\nEnter your credit score(300 out of 850): ");  //excellent (720-850), good (690-719), fair (630-689) or poor (300-629).
	scanf("%lld",&score);

	if(age>=30&&income>=180000&&score>=720){
		if(age<120&&score<=850&&income>=180000){
			printf("You are eligible for the loan. Kindly follow Loan Article #1 provided by the Loan Department of the bank. ");
		}//end if inner 1
		else{
			printf("Invalid input provided.");
		}//end else 1
	}//end if 1
	
	else if(age>=25&&income>=120000&&score>=690){
		if(age<120&&score<=850&&income>=120000){
			printf("You are eligible for the loan based on some conditions in Loan Article #2 provided by the Loan Department of the bank.");
		}//end if inner 2 
		else {
			printf("Invalid input provided.");
		}//end else 2 	
	}//end else if 1
 	
	else if(age>=18&&income>=80000&&score>=630){
		if(age<120&&score<=850&&income>=80000){
			printf("You are eligible for the loan but you are strictly required to follow the conditions in Loan Article #3 provided by the Loan Department of the bank.");
		}//end if inner 3
		else {
			printf("Invalid input provided.");
		}//end else 3
	}//end else if
	
	else {
		printf("Sorry, You are not eligible for the loan. ");
	}//end else
}//end Loan function

int main(){
	Loan();
}//end main

