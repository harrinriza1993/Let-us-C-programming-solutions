/* (a) Using conditional operators determine :

 	(1) Whether the character entered through the keyboard is a lower case alphabet or not.
 	(2) Whether a character entered through the keyboard is a special symbol or not.
*/

#include<stdio.h>

void main()
{
	char character;
	int choice;
	
	printf("Entered the character\n");
	scanf("%c", &character);
	
	printf("\nEnter the choice\n");
	printf("1. To find the lower or upper case\n");
	printf("2. To find the special character\n");
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1 :
			((character >= 97) && (character <= 122)) ? printf("The character is a lower case alphabet\n") : printf("The character is not a lower case letter\n");
				break;
		case 2 :	
			(((character >= 0) && (character <= 47)) || ((character >= 58) && (character <= 64)) || ((character >= 91) && (character <= 96)) || ((character >= 123) && (character <= 127))) ? 				printf("The character is a special character\n") : printf("The character is  not a special character\n");
					break;
		default :
			printf("Invalid character\n");
	}
}
