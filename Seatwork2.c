#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int base, height, area;
	
	printf("Enter the base of the triangle: ");
	scanf("%d", &base);
	printf("\n");
	
	printf("Enter the height of the triangle: ");
	scanf("%d", &height);
	printf("\n");
	
	area=base*height;
	printf("The area of the triangle is %d\n", area);
	
	return 0;
}
