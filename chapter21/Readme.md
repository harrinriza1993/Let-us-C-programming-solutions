# Chapter 21 : Operation On Bits 

### [A] Answer the following:

- **a.c** : The information about colors is to be stored in bits of a char variable called color. Bit numbers 0 to 6, 
each represent 7 colors of a rainbow, i.e., bit 0 represents violet, 1 represents indigo, and so on. Write a program 
that ask the user to enter a number and based on this number it reports which colors in the rainbow do the number 
represents.

- **b.c** : In an inter-college competition, various sports like cricket, basketball, football hockey, lawn tennis, 
table tennis, carom and chess are played between different colleges. The information regarding the games won by a particular 
college is stored in bit numbers 0, 1, 2, 3, 4, 5, 6, 7 and 8, respectively of an integer variable called game. The college
that wins in 5 or more than 5 games is awarded the Champion of Champions trophy. If a number representing the bit pattern 
mentioned above is entered through the keyboard then write a program to find out whether the college won the Champion of the 
Champions tropy or not, along with the games won by the college.

- **c.c** : An animal could be a canine(dog, wolf, fox, etc), a feline(cat, lynx, jagur, etc), a cetacean (whale, narwhal, etc) or 
a marsupial(Koala, wombat, etc). The information whether a particular animal is canine, feline, cetacean, or marsupial is stored in 
bit number 0, 1, 2 and 3, respectively of a integer variable called type. Bit number 4 of the variable type stores the information about
whether the animal is Carnivore or Herbivore. For the following animal, complete the program to determine whether the animal is herbivore 
or a carnivore. Also determine whether the animal is a canine, feline, cetacean or a marsupial
       
       struct animal
       {
       	char name[30]; int type;
       } 
       
       struct animal a = {"OCELOT", 18};
       		
- **d.c** : The time field in structure is 2 bytes long. Distribution of different bits which account for hours, minutes and seconds is given 
below. Write a function which would receive the two-byte time entry and return to the calling function, the hours, minutes and seconds.
       
       15  14  13   12   11   10    9    8    7    6     5    4    3   2   1   0
       H    H   H    H    H    M    M    M    M    M     M    S    S   S   S   S
       
- **e.c** : In order to save disk space information about student is stored in an integer variable. If bit number 0 is on then it indicates Ist 
year student, bit number 1 to 3 stores IInd year, IIIrd year and IVth year student respectively. The bit number 4 to 7 stores stream Mechanical, 
Chemical, Electronics and CS. Rest of the bits store room number. Such data for 4 students is stored in the following array:
      
      		int data[ ] = { 273, 548, 786, 1096 } ;
      		
write a program that asks for the room number and displays the information about the student, if its data exists in the array.   

- **f** :  What will be the output of the following program

	#include<stdio.h>

	int main()
	{
		int i = 32, j = 65, k, l, m, n, o, p;
		
		k = i | 35;
		l = ~k;
		m = i & j;
		n = j ^ 32;
		o = j << 2;
		p = i >> 5;
		
		printf("k = %d l = %d m = %d\n", k, l, m);
		printf("n = %d o = %d p = %d\n", n, o, p);
		
		return 0;
	}
	
### [B] Answer the following:


- **a** : What is the hexadecimal equivalent of the following binary numbers :

		01011010
		11000011
		1010101001110101
		1111000001011010

- **b** : Rewrite the following expressions using bitwise compound assignment operators :

		a = a | 3	a = a & 0x48	b = b ^ 0x22
		c = c << 2	d = d >> 4

- **c.c** : Consider an unsigned integer in which rightmost bit is numbered as 0. Write a function checkbits(x, p, n) 
which returns true if all "n" bits starting from position "p" are turned on. For example, checkbits(x, 4, 3) will return 
true if bits 4, 3 and 2 are 1 in number x.

- **d.c** : Write a program to scan a 8 bit number into a variable and check whether its 3rd, 6th and 7th bit is on.

- **e.c** : Write a program to receive an unsigned 16-bit integer and exchange the contents of its 2 bytes using bitwise 
operators.

- **f.c** : Write a program to receive a 8 bit number into a variable and exchange it's higher 4 bits with lower 4 bits.

- **g.c** : Write a program to receive a 8 bit number into a variable and then set its odd bits to 1. 

- **h.c** : Write a program to receive a 8 bit number into a variable and check if it's 3rd and 5th bit are on. If these 
bits are found to be on then put them off.

- **i.c** : Write a program to receive a 8-bit number into a variable and check if it's 3rd bit and 5th bit are off. If 
these bits are found to be off then put them on.

- **j.c** : Rewrite the showbits() function used in this chapter using the _BV macro. 

