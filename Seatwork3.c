#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int year, age;
	
	printf("Enter your birth year: ");
	scanf("%d", &year);
	
	age=2016-year;
	
	printf("You are %d years old.\n", age);
	
	return 0;
}
