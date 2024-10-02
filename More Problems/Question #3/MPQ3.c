/* MPQ3 //More Problems Q3
* NAME: SYED ANWER
* SECTION: BAI-1A
* ROLL NO: 24k-0033
* QUESTION: Write a program that uses bitwise operators to perform encryption and decryption of a
character.
*/
#include<stdio.h>

int Bitwise(){
	char ch;
	int key;
	char enc;
	int dec;
	printf("\nEnter a character: ");
	scanf("%c",&ch);
	printf("\nEnter key: ");
	scanf("%d",&key);
	enc=ch^key;
	printf("\nEncryption: %c",enc);
	printf("\nEnter Decryption key: ");
	scanf("%d",&dec);
	
	if(dec==key){
		printf("\nUnlocked. Your character is: %c",ch);
	}//end if 1
	else {
		printf("\nInvalid key.");
	}//end else 1
	return 0;


}//end Bitwise function

int main(){
	Bitwise();	
}//end main