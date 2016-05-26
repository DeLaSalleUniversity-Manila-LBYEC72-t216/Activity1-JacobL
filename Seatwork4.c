#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	float x, y;
	
	printf("Input the value of x: ");
	scanf("%f", &x);
	
	y=x/70;
	
	printf("f(x) is equal to %.2f",y);
	
	return 0;
}
