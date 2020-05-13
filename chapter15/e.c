/* (e) Write a program that generates and prints the fibonacci words of
       order 0 through 5. If f(0) = "a", f(1) = "b", f(2) = "ba", f(3) = "bab",
       f(4) = "babba", etc.
*/

#include<stdio.h>
#include<string.h>

void main()
{
	char f[5];
	int i;
	f[0] = 'a';
	f[1] = 'b';
	printf("%c\n%c\n",f[0],f[1]);
	
	for(i = 2; i < 5; i++)
	{
		f[i] = strcat(f[i - 1],f[i - 2]);
		printf("%s",f[i]);
	}
}
