/*(k)Write a program to print 24 hours of a day with suitable 
     suffixes like AM,PM,Noon,Midnght.
*/

/*Apporach:
	1)The hours from 1 to 24 are taken and print accordingly*/

#include<stdio.h>

void main()
{
	int hour;

	for(hour=1;hour<=24;hour++)
	{
		/*using if, the conditions are checked 
	 	  and suffixes like like AM,PM,Noon,Midnght
	         are printed.
	       */
		if(hour>=1 && hour<=11)
			printf("%d AM\n",hour);
		else if(hour==12)
			printf("%d Noon\n",hour);
		else if(hour>=13 && hour<=23)
			printf("%d PM\n",hour);
		else if(hour==24)
			printf("%d Midnight\n",hour);
   }
}

