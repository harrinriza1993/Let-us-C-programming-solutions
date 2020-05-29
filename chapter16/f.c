/*(f) Write a program that will read a line and delete from it all 
      occurences of the word 'the'.

Apporach:
	1) If "the" is found in a sentence then we have to right shift
           the sentence. 
*/

#include<stdio.h>
#include<string.h>

void main()
{
	char sent[80];
	char word[] = "the";
	int i;

	printf("Enter the sentence\n");
	gets(&sent);
	
	printf("To delete the occurences of the word the\n");
	for (i = 0; sent[i] != '\0'; i++)
	{
		if (sent[i] == 't' && sent[i + 1] == 'h' && sent[i + 2] == 'e') 
		{
			for(; sent[i + 3] != 0; i++)
			{
				sent[i] = sent[i + 3];
	
			}
			sent[i] = '\0';
			printf("%s\n", sent);
			i = -1;
		}
	}
	printf("%s", sent);
}
                      
                        
        
