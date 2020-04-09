/*(b) 3.To convert an upper case alphabet to lowercase.
    
   Apporach :
	1)Compare the ascii value of uppercase and lowercase
          letters and print the alphabet accordingly.
*/

#include<stdio.h>
#define CHA(i) for (int j = 97;j <= 122;j++)\
	       		if (i == j-32) \
				printf("The lowercase of a uppercase alphabet is %c\n",j);	

void main()
{
	char alphabet;

	printf("Enter the uppercase alphabet\n");
	scanf("%c",&alphabet);
	
	CHA(alphabet);
}
	
			
