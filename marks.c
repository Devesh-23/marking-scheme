#include<stdio.h>
int main(){
	float marks;
	//input from the user
	printf("enter your marks: ");
	scanf("%f",&marks);
	
	//Cheching the condition
	if(marks>=85.00)
	{
		printf("Grade A");
	}
	else if(marks>=70.00)
	{
		printf("Grade B");
	}
	else if(marks>=55.00)
	{
		printf("Grade C");
	}
	else if(marks>=40.00)
	{
		printf("Grade D");
	}
	else {
		printf("Grade F");
	}
	
	return 0;
}
