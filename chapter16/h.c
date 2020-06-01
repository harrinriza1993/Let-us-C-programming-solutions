/*(h) Write a program to count the number of occurences of any two vowels 
      in succession in a line of text. For example, in the following 
      sentence:
	"Please read this application and give me gratuity"
	 such as occurences are ea, ea, ui.

Apporach:
	1) The vowels with sucession vowels are checked in a line using 
           if condition.
*/


#include<stdio.h>
#include<string.h>

void main()
{
	char sent[80];
	int i, count = 0;
	
	printf("Enter the sentence\n");
	gets(sent);
	
	/*To check the presence of the vowels. */
	for(i = 0; i < strlen(&sent); i++)
	{
		/*The vowels are a, e, i, o, u, each combiations are checked and the count is increased
		  if it is present. */
		if ((sent[i] == 'a')|| (sent[i] == 'e') || (sent[i] == 'i') || (sent[i] == 'o') 
		|| (sent[i] == 'u') || (sent[i] == 'A') || (sent[i] == 'E') || (sent[i] == 'I') 
		|| (sent[i] == 'O') || (sent[i] == 'U'))
		{
			if ((sent[i + 1] == 'a') || (sent[i + 1] == 'e') || (sent[i + 1] == 'i') || (sent[i + 1] == 'o')
			|| (sent[i + 1] == 'u') || (sent[i + 1] == 'A') || (sent[i + 1] == 'E') || (sent[i + 1] == 'I') 
			|| (sent[i + 1] == 'O') || (sent[i + 1] == 'U'))
			{
				count++;
			}
		}
	}
	
	/*Print the number of occurences of Vowels. */
	printf("The number of occurences of any vowels in a line is\n");
	printf("%d\n", count);
}
			  
			  
