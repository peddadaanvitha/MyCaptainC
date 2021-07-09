#include<stdio.h>
int main(void)
{
	int grade;
	printf("Enter the marks:");
	scanf("%d",&grade);
	(grade>=85&&grade<=100)?printf("Grade A"):(grade>=70&&grade<=84)?printf("Grade B"):(grade>=55&&grade<=69)?printf("Grade C"):(grade>=40&&grade<=54)?printf("Grade D"):printf("Grade F");
	return 0;
}
