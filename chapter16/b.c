/*(b) Write a program that uses an array of pointers to strings str[] as given below.
      Receive a string str1 and check if str1 is embedded in any of the strings in str[].

			char *str[] = {
					"We will teach you how to....",
					"Move a mountain",
			          	"Level a building",
					"Erase the past",
		 			"Make a million",
					"....all through C!"
				      };
Apporach:
	1) Using strstr function we can find a word is present in a string or not.
*/

#include<stdio.h>
#include<string.h>

void main()
{
	char a[3][50] = {
			  "She is beautiful",
			  "Grasses are green",
		          "Sky is blue"
			};
	char word[] = "Sky";
	int found = 0;

	for(int i = 0; i < 3; i++)
	{
		char *check = strstr(&a[i][0], word);
		if(check)
			found = 1;
		else
			found = 0;
	}
	if (found == 1)
		printf("String is found\n");
	else
		printf("String is not found\n");
} 

