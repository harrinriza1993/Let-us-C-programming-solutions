# Chapter 19 : More Issues in Input / Output

### [A] Answer the following:

- **a** : How will you use the following program to :

	- Copy the contents of one file into another.
	- Create a new file and add some text to it.
	- Display the contents of an existing file.
	
	#include<stdio.h>
	
	int main()
	{
		char ch, str[10];
		
		while((ch = fgetc(stdin)) != -1)
			fputc(ch, stdout);
		
		return 0;
	}

- **b** : State True or False

- **c.c** : Write a program using command line arguments to search for a word in file and  replace it with the specified word. 
The usage of the program is shown below
       		
       		c>change<old word><new word><filename>
       		
- **d.c** : Write a program that can be used as at command prompt as a calculation utility. The usage of the program is shown below.
       
       	c>calc<switch><n><m>
where n and m are two integer operands. switch can be any arithmetic operator. The output should be the result of the operator.


