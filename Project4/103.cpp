#include <stdio.h>

int main() 
{
	int num; 
	scanf_s("%d", &num);
	if (num%2 == 0) 
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
 	}
}