/* final_grade
Assignment of Lab 05
Name: Syed Anwer
Section: BAI-1A
Roll no: 24k-0033
Question: Create a program that calculates the final grade of a student based on multiple criteria,
including attendance, assignment scores, and exam results, using nested decision structures. */

#include<stdio.h>

int main(){
	printf("\n\t\t\t\tFINAL GRADE CALCULATION\n\n");
	int days,holi;
	float exam=0;
	int sub1,sub2,sub3;
	float total=0;
	float att,asm;
	float gpa=0;
	days=109;
	printf("Total no. of days are %d days per semester.\n",days);
	holi=45 + 4 ;
	printf("Total no. of holidays (including four public holidays) are %d.\n",holi);
	days=days-holi;
	printf("Final attendence is %d days. \n",days);
	printf("Enter attendence of the student (out of %d): ",days);
	scanf("%f",&att);
	printf("\nEnter score of assignments (out of 10): ");
	scanf("%f",&asm);
	printf("\nEnter score of calculus: (out of 100): ");
	scanf("%d",&sub1);
	printf("\nEnter score of programming fundamentals: (out of 100): ");
	scanf("%d",&sub2);
	printf("\nEnter score of physics: (out of 100): ");
	scanf("%d",&sub3);
	exam = sub1 + sub2 + sub3;
	exam = (exam/300)*80;
	att = (att/days)*10;
	if(asm>10||asm<0||att>64||att<0||sub1>100||sub1<0||sub2>100||sub2<0||sub3>100||sub3<0){
		printf("Invalid input!");
	}//end if
	else{
		printf("\nTotal percentage is 100.\n");
		total = exam+att+asm;
		printf("Total percentage obtained %.2f out of 100",total);
		gpa = (total/100)*4;
		printf("\nTotal gpa obtained: %.2f",gpa);
		printf("\n");
		//Using nested decision structures for the gpa to calculate the final grades.
		if(gpa>0&&gpa<=4){
			printf("\n");
			if(gpa>=3.48){
				printf("Grade: A");
			}//end if inner 1 
			else{
				if(gpa>=3.28){
					printf("Grade: A-");
				}//end if inner 2
				else{
					if(gpa>=2.8){
						printf("Grade: B");
					}//end if inner 3
					else{
						if(gpa>=2.32){
							printf("Grade: C");
						}//end if inner 4
						else{
							if(gpa>=2){
								printf("Grade: D");
							}//end if inner 5
							else{
								if(gpa>=0){
									printf("Grade: F");
								}//end if inner 6
							}//end else inner 5
						}//end else inner 4
					}//end else inner 3
				}//end else inner 2
			}//end else inner 1

		}//end if outer 1
	}//end else	
	return 0;
}//end main function