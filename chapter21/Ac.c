/* (c) An animal could be a canine(dog, wolf, fox, etc), a feline(cat, lynx, jagur, etc), a cetacean
       (whale, narwhal, etc) or a marsupial(Koala, wombat, etc). The information whether a particular
       animal is canine, feline, cetacean, or marsupial is stored in bit number 0, 1, 2 and 3, respectively
       of a integer variable called type. Bit number 4 of the variable type stores the information about
       whether the animal is Carnivore or Herbivore. For the following animal, complete the program to
       determine whether the animal is herbivore or a carnivore. Also determine whether the animal is
       a canine, feline, cetacean or a marsupial
       
       struct animal
       {
       	char name[30]; int type;
       } 
       
       struct animal a = {"OCELOT", 18};
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	struct animal
	{
		char name[30];
		int type;
	};
	
	struct animal a = {"OCELOT", 18};
	
	/*Shift the number by 1 for each bit and find it's type. */
	if(a.type % 2 == 1)
		printf("Canine\n");
	
	a.type = a.type >> 1;
	
	if(a.type % 2 == 1)
		printf("Ocelot is Feline\n");
	
	a.type = a.type >> 1;
	
	if(a.type % 2 == 1)
		printf("Cetacean\n");
	
	a.type = a.type >> 1;
	
	if(a.type % 2 == 1)
		printf("Marsupial\n");
	
	a.type = a.type >> 1;
	
	if(a.type % 2 == 1)
		printf("And it is a Carnivore\n");
	else
		printf("And it is a Herbivore\n");
}
