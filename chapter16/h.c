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

	for(i = 0; i < strlen(&sent); i++)
	{
		
		/*The vowels are a, e, i, o, u, each combiations are checked and the count is increased
		  if it is present. */
		if ((sent[i] =='a' && sent[i + 1] == 'e') ||(sent[i] == 'a' && sent[i + 1] == 'i')
                   || (sent[i] == 'a' && sent[i + 1] == '0')||(sent[i] == 'a' && sent[i + 1] == 'u'))
			count++;
		if ((sent[i] == 'e' && sent[i + 1] == 'a') ||(sent[i] == 'e' && sent[i + 1] == 'i')
                   || (sent[i] == 'e' && sent[i + 1] == '0')||(sent[i] == 'e' && sent[i + 1] == 'u'))
			count++;
		if ((sent[i] == 'i' && sent[i + 1] == 'a') ||(sent[i] == 'i' && sent[i + 1] == 'e')
                   || (sent[i] == 'i' && sent[i + 1] == '0')||(sent[i] == 'i' && sent[i + 1] == 'u'))
			count++;
		if ((sent[i] == 'o' && sent[i + 1] == 'a') ||(sent[i] == 'o' && sent[i + 1] == 'e')
                   || (sent[i] == 'o' && sent[i + 1] == 'i')||(sent[i] == 'o' && sent[i + 1] == 'u'))
			count++;
		if ((sent[i] == 'u' && sent[i + 1] == 'e') ||(sent[i] == 'u' && sent[i + 1] == 'i')
                   || (sent[i] == 'u' && sent[i + 1] == '0')||(sent[i] == 'u' && sent[i + 1] == 'a'))
			count++;
	}
	printf("The number of occurences of any vowels in a line is\n");
	printf("%d\n", count);
}
			  
			  
