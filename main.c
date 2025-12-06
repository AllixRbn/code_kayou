#include<stdio.h>

/**
 * use scanf to input age
 * use printf to dislay age
 */
void main(void)
{
	int age;

	printf("How old are you? : ");
	scanf("%i", &age);
	printf("You are %i years old\n", age);
}
