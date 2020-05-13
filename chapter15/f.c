/*(f) To uniquely identify a book a 10-digit ISBN(International Standard 
      Book number) is used. The rightmost digit is a checksum digit. This
      digit is determined from the other 9 digits using the condition that
      d1 + 2d2 + 3d3 + .... + 10d10 must be a multiple of 11(where di denotes 
      the ith digit from the right). The checksum digit d1 can be any value from
      0 tp 10. Write a program that receives a 10-th digit integer, computes the
      checksum, and reports whether ISBN number is correct or not.

Apporach:
	1) An array of 10 integer is entered through keyboard, then the 
	   checksum is calculated using the condition,
	
		d1 + 2d2 + 3d3 + .... + 10d10
	2) If the checksum is divisible by 11, then the number is a isbn 
	   number, else it is not a isbn number.
*/
	

#include<stdio.h>

void main()
{
	int arr[10];
	int i, checksum ;
	
	/*step1 : Ten numbers are obtained from keyboard.*/
	printf("Enter the isbn number\n"); 
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);

		checksum = 0;
		
		/*step2 : The checksum is calculated using the condition.*/
		checksum = arr[0] + (2 * arr[1]) + (3 * arr[2]) 
			   + (4 * arr[3]) + (5 * arr[4]) + (6 * arr[5])
			   + (7 * arr[6]) + (8 * arr[7]) + (9 * arr[8])
 			   + (10 * arr[9]);
	}
	printf("The checksum is %d\n", checksum);

	/*step3 : If the checksum is divisible by 11, then the given
  		  number is a ISBN number. */
	if (checksum % 11 == 0)
		printf("The number is ISBN number\n");
	else
		printf("The number is not an ISBN number\n");
}
	
	

