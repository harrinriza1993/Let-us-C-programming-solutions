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
	int is_bit_set;
	struct animal
	{
		char name[30];
		int type;
	};
	
	struct animal a = {"OCELOT", 18};
	char *name[] = {
					"canine",
					"feline",
					"cetacean",
					"marsupial",
					"Herbivorous",
					"carnivorous",
				  };
	
	for(int i = 0; i <= 4; i++)
	{
		is_bit_set = (1 << i) & a.type;
	
		if(is_bit_set)
		{
			printf("%s : %s\n",a.name, name[i]);
		}
		else if(i == 4)
		{
			printf("%s : %s",a.name, name[i + 1]);
		}	
	}
}
