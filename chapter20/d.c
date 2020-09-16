/* (d) Write a program that can be used as at command prompt as a calculation utility.
       The usage of the program is shown below.
       
       c>calc<switch><n><m>
       
       where n and m are two integer operands. switch can be any arithmetic operator.
       The output should be the result of the operator.
 */
 
 #include<stdio.h>
 #include<string.h>
 #include<stdlib.h>
 
void main(int argc, char *argv[])
{
 	int output;
 	
 	/*Converting string in to integers and characters. */
 	int num1 = atoi(argv[2]);
 	int num2 = atoi(argv[3]);
 	char ch = *(argv[1]);
 	
 	if(argc != 3)
 	{
 		printf("Improper number of arguments\n");
 		exit(0);
 	}
 	
 	/*Switch case to perform arithmetic operations. */
 	switch(ch)
 	{
 		case '+' :
 			output = num1 + num2;
 			printf("The output is %d\n", output);
 			break;
 		
 		case '-' :
 			output = num1 - num2;
 			printf("The output is %d\n", output);
 			break;
 		case '*' :
 			output = num1 * num2;
 			printf("The output is %d\n", output);
 			break;
 		case '/' :
 			output = num1 / num2;
 			printf("The output is %d\n", output);
 			break;
 		case '%' :
 			output = num1 % num2;
 			printf("The output is %d\n", output);
 			break;
 		
 		default :
 			printf("Invalid operator\n");
 		
 	}
}
