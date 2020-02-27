#include<stdio.h>
void main()
{
	int a,b,c,d,e,s1,s2,s3;

	for (a=1;a<=30;a++)
	{
		for (b=1;b<=30;b++)
		{
			for (c=1;c<=30;c++)
			{
				s1 = a*a;
				s2 = b*b;
				s3 = c*c;
				if (s1 == s2 *s3 || s2 == s1*s3 || s3== s1*s2)
					printf("%d %d %d is a pythogorean triplet\n",a,b,c);
			}
		}
	}
}
