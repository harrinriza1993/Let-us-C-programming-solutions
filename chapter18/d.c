/*(d) If we are to display the following output properly aligned which format specifiers would you
      use?
      
      Discovery of India		JawaharlalNehru	425.50
      My Experiments With Truth	Mahatma Gandhi		375.50
      Sunny Days			Sunil Gavaskar		95.50
      One More Over			Erapalli prassana	85.00
 
Apporach :
	1) Numbers should be mentioned with % symbol in order to align properly.
*/

#include<stdio.h>

void main()
{
	char a1[] = " Discovery of India";
	char a2[] = "JawaharlalNehru";
	float a3 = 425.50;
	
	char b1[] = "My Experiments With Truth";
	char b2[] = "Mahatma Gandhi";
	float b3 = 375.50;
	
	char c1[] = "Sunny Days";
	char c2[] = "Sunil Gavaskar";
	float c3 = 95.50;
	
	char d1[] = "One more over";
	char d2[] = "Erapalli prassana";
	float d3 = 85.00;
	
	/*Output with properly aligned with format specifiers. */	
	printf("The output properly aligned with format apecifiers is\n\n");
	printf("%s %30s %20f\n", a1, a2, a3);
	printf("%26s %22s %21f\n",b1, b2, b3);
	printf("%11s %37s %20f\n", c1, c2, c3);
	printf("%14s %37s %17f\n", d1, d2, d3);
}
