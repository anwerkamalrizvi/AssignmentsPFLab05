/* S4Q2 //Section 4 Question 2
* NAME: SYED ANWER
* SECTION: BAI-1A
* ROLL NO: 24k-0033
* QUESTION: Create a program that counts the number of 1s in the binary representation of a number.
*/

#include <stdio.h>

int Count(void) {
	int num;
	int count=0;
	
	printf("Enter an number: ");
	scanf("%d", &num);

    	for (; num> 0; num = num/2) {
        if (num%2 == 1) {
            count++;  
		}//end if 1
	}//end for loop

	printf("Total count of binary representation (1s only) is: %d\n", count);

	return 0;

}//end count function

int main(void){

	Count();	

}//end main 
