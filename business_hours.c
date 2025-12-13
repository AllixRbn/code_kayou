#include <stdio.h>


void hour(int *enterHour)
{
	printf("What time is it? : ");
	scanf("%i", enterHour);
}

void main(void)
{
	int userInput;

	hour(&userInput);

	if(userInput >= 9 && userInput <= 17)
	{
		printf("Let's get to business, bitch we're open!\n");
	}
	else if(userInput >= 0 && userInput <= 23)
	{
		printf("Gurl you know I don't work that shift, get lost.\n");
	}
	else
	{
		printf("I think you got the wrong number. Try again butter fingers.\n");
	}
}
