#include <stdio.h>

#define MAXIMUM_CHARACTERS 80
#define LETTERS_IN_ALPHABET 26

/*
Write a program that encrypts/decrypts a message using the Caesar Cipher (ROT)
*/

int main(void)
{
	int shift, action, current_index_input = 0, current_index_output;
	char message[MAXIMUM_CHARACTERS]= {0}, current_character;

	printf("--- cROT v1 ---\n");
	printf("| [1] Encrypt |\n");
	printf("| [2] Decrypt |\n");
	printf("---------------\n");

	for(;;)
	{
		printf("Enter desired action: ");
		scanf("%d", &action);
		if(action == 1 || action == 2) break;
		else printf("Invalid Action.\n");
	}
	

	printf("\nEnter The Message: ");

	scanf(" ");
	while((current_character = getchar()) != '\n')
		message[current_index_input++] = current_character;
	
	printf("Enter Key: ");
	scanf("%d", &shift);
	if(action == 1)
		printf("Encrypted Message: ");
	else
	{
		shift = LETTERS_IN_ALPHABET - shift;
		printf("Decrypted Message: ");
	}

	for(current_index_output = 0; current_index_output < current_index_input; current_index_output++)
	{
		if(message[current_index_output] >= 'A' && message[current_index_output] <= 'Z')
			putchar(((message[current_index_output] - 'A') + shift) % LETTERS_IN_ALPHABET + 'A');
		else if(message[current_index_output] >= 'a' && message[current_index_output] <= 'z')
			putchar(((message[current_index_output] - 'a') + shift) % LETTERS_IN_ALPHABET + 'a');
		else
			putchar(message[current_index_output]);
	}
	
	return 0;
}