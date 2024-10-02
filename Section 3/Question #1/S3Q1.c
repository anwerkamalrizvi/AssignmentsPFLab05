/*S3Q1 //Section 3 Q1
* NAME: SYED ANWER
* SECTION: BAI-1A
* ROLL NO: 24k-0033
* QUESTION: Write a program using a ternary operator to find the maximum of two numbers.
*/

#include<stdio.h>

int Max(void)
{
	int a, b;
	int check=0;
	printf("\nEnter number 1: ");
	scanf("%d",&a);	
	printf("\nEnter number 2: ");
	scanf("%d",&b);
	check=(a>b)? a :b;
	printf("%d", check);
	return 0;

}//end Max function


int main(){
	Max();
}//end main function
