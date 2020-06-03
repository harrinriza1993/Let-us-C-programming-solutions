/*(e) Write a program to delete all vowels from a sentence. Assume that 
      the sentence is not more than 80 characters long.

Apporach:
	1) Except the vowels all others are to be printed, so vowels are excluded
           shifting the other characters which excludes the Vowels.
*/

#include<stdio.h>
#include<string.h>

void main()
{
	char a[80];

	printf("Enter the sentence\n");
	gets(a);
	
	int length = strlen(a);
	
	/*Print the sentence without Vowels. */
	for(int i = 0; i < length; i++)
	{
		if ((a[i] == 'a')|| (a[i] == 'e') || (a[i] == 'i')|| (a[i] == '0')|| (a[i] == 'u'))
		{
			strcpy(&a[i], &a[i + 1]);
		}
	}
	printf("%s\n", a);
	
}
