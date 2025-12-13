#include <stdio.h>
#include <string.h>

void main(void)
{
	char password[20];

	printf("Create a new password: ");
	scanf("%s", password);

	if(strlen(password) < 8)
	{
		printf("This password is weak as fuck...\n");
	}
	else if(strlen(password) <= 11)
	{
		printf("That shit's okay but... meh. Do better...\n");
	}
	if(strlen(password) > 12)
	{
		printf("Okay that shit is strong, noice!\n");
	}
}
