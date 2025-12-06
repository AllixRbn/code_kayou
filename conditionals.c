#include<stdio.h>
#include<string.h>
/**
 * 
 * 
 */

void ask_username(char *usernameToFill)
{
	printf("Enter your username: ");
	scanf("%s", usernameToFill);
}
void main(void)
{
	int count = 0;
	char username[10] = "lix";
	char user_input[20];

	ask_username(user_input);

	while (strcmp(user_input, username) != 0 && count < 3)
	{
		if (count <= 1)
		{
			printf("Bitch you're wrong, try again hoe: \n");
		}
		else if (count == 2)
		{
			printf("Careful hoe, you got one more try: \n");
		}
		ask_username(user_input);
		count++;
	}
	if (strcmp(user_input, username) != 0)
	{
		printf("Nope, get out of here\n");
	}
	else
	{
		printf("Welcome %s :)\n", username);
	}
}
