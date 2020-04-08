/*(b) 3.To convert an upper case alphabet to lowercase.
    
   Apporach :
	1)Compare the ascii value of uppercase and lowercase
          letters and print the alphabet accordingly.
*/

#include<stdio.h>
#define CHA(i) for (i = 65;i <= 90;i++)\
			for (char j = 97;i == j-32;j++)\
				printf("The small case alphabet of %c is %c\n",i,j);
void main()
{
	char alphabet;

	printf("Enter the alphabet\n");
	scanf("%c",&alphabet);
	
	CHA(alphabet);
}
	
			 
