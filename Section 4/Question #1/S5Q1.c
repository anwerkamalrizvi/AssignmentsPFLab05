/* S5Q1 //Section 5 Question 1
* NAME: SYED ANWER
* SECTION: BAI-1A
* ROLL NO: 24k-0033
* QUESTION: Write a program to swap two numbers using bitwise XOR.
*/

#include<stdio.h>

int main(void)
{
	int a=4; //0100 in binary
	int b=5; //0101 in binary
	printf("\nNumber 1 is: %d\nNumber 2 is: %d\n", a,b);
	
 	//XOR definition: Performs calculation only in a binary.
	//Calculations: 1 ^ 1 = 0 & 0 ^ 0 = 0 & 1 ^ 0 OR 0 ^ 1 = 1
	//where '^' is a symbol of XOR operator.
	b=b^1;	
	//b^a= 0101 ^ 0001 = 0100

	a=a^1;
	//a^b 0100 ^ 0001 = 0101 
	printf("\nAfter swapping:\nNumber 1: %d\nNumber 2: %d",a,b);
	return 0;
	
}//end main function
