#include<stdio.h>

/**
 * use scanf to input age
 * use printf to dislay age
 */
void main(void)
{
	char username[20];
	char password[20];
	int age;

	/*input username*/
	printf("Enter your username: ");
	scanf("%s", username);

	/*input password*/
	printf("Enter your password: ");
	scanf("%s", password);

	/*input age*/
	printf("How old are you? : ");
	scanf("%i", &age);

	/*output username, age and password*/
	printf("Welcome %s :)\n", username);
	printf("Your password is: %s\n", password);
	printf("You are %i years old\n", age);
}
