### Chapter 15  :  Strings

### [A] What will be the output of the following programs.

- This one is covered in `exerciseA` file.

### [B] Fill in the blanks:
- This one is covered in `exerciseB` file.

### [c] Attempt the following

**a** : Which is more appropriate for reading in a multi-word string?

	gets()		printf()	scanf()		puts()

**b**: If the string "Alice in wonder land" is fed to the following scanf()
       statement, what will be the contents of the arrays str1, str2, str3, and
       str4?
	scanf("%s%s%s%s",str1, str2, str3, str4);

**c.c**: Write a program that extracts part of the given string from the specified 
position. For example, if the string is "Working with strings is fun", then if from 
position 4, 4 characters are to be extracted then the program should return as "king".
If the number of characters to be extracted is 0 then the program should extract entire 
string from the specified position.

**d.c**: Write a program that converts a string like "124" to an integer 124.

**e.c**: Write a program that generates and prints the fibonacci words of order 0 through 
5. If f(0) = "a", f(1) = "b", f(2) = "ba", f(3) = "bab", f(4) = "babba", etc.

**f.c**: To uniquely identify a book a 10-digit ISBN(International Standard Book number) is used.
The rightmost digit is a checksum digit. This digit is determined from the other 9 digits using 
the condition that d1 + 2d2 + 3d3 + .... + 10d10 must be a multiple of 11(where di denotes the 
ith digit from the right). The checksum digit d1 can be any value from 0 tp 10. Write a program 
that receives a 10-th digit integer, computes the checksum, and reports whether ISBN number is 
correct or not.

**g.c**:  A credit card number is usually a 16 digit number. A valid credit card number would 
satisfy a rule explained below with the help of a dummy credit card number -- 4567 1234 5678 9129. 
Start with the rightmost-1 digit and multiply every other digit by 2.

	4567 1 2 3 4 5 6 7 8 9 1 2 9
	8 12 2 6 10 14 18 4

	Then subtract 9 from any number larger than 10. Thus we get:

	8 3 2 6 1 5 9 4

	Add them all up to get 38.

	Add all other digits to get 42.

	Sum of 38 and 42 is 80. Since 80 is divisible by 10, the credit card number
        is valid.
Write a program that receives a credit card number and checks the above rule whether the 
credit card number is valid.


