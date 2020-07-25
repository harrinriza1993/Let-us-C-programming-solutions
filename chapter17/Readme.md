### Chapter 17  :  Structures

### [A] Answer the following

- This one is covered in `exerciseA` file.  

### [B] Attempt the following

**a.c** : Create a structure called student that contain data given below Roll number, 
Name, Department, Course, Year of joining
Assume that there are not more than 450 students in the college.
	
	(1) Write a function to print names of  all students who joined in a particular
	    year.
	(2) Write a function to print the data of a student whose roll number 
	    is received by the function.

**b.c** : Create a structure that contain data of customers in a bank. The 
data to be stored is Account number, Name, Balance in account. 
Assume maximum of 200 customers in the bank.
       
       (1) Write a function to print the Account number and name of each
           customer with balance below rs.100.
       (2) If a customer requests for withdrawl or deposit, the form contains
           the fields:
           
           Accno, amount, code(1 for deposit, 0 for withdrawl)
           
           Write a function that prints a message "The balance is insufficient for 
           the specified withdrawl", if on withdrawl the balance falls below Rs.100.
           
**c.c** : An automobile company has serial number for engine parts starting from AA0 to FF9.
The other characterstics of a parts are year of manufacture, material and quantity manufactured.
       
       1) Create a structure to store information corresponding to a part.
       2) Write a program to retrieve information on parts with serial
          numbers between BB1 and cc6.

**d.c** : A record contains name of cricketer, his age, number of test matches that he has played and the 
average runs that he has scored in each test match. Create an array of structures to hold records of 20 
such cricketers and then write a program to read these records and arrange them in ascending order by 
average runs. Use the qsort() standard library function.

**e.c** : There is a structure called employee that holds the employee code, name and the date of joining. 
Write a program to create an array of structure and write a  data into it. Then ask the user to enter 
current date, Display the names of those employee whose tenure is greater than or equal to 3 years.
 
**f.c** : Create a structure called library to hold accession number, title of the book, authorname, 
price of the book, and flag indicating whether book is issued or not. Write a menu-driven program that 
implements the working of a library. The menu option should be
       
       1. Add book information
       2. Display book information
       3. List all books of given author
       4. List the title of specified book
       5. List the count of books in the library
       6. List the books in the order of accession number
       7. Exit

**g.c** : Write a function that compares two given dates. To store a data use a structure that contains three 
members namely day, month and year. If the dates are equal the function should return 0, otherwise it should return 1.
  
**h.c** :  Linked list is very common data structure that is often used to store similar data in memory. The individual 
elements of a linked list are "stored somewhere" in memory. The order of the elements is maintained by explicit links 
between them. Thus, a linked list is a collection of elements called nodes, each of which stores two item of information 
- an element of the list, and a link, ie, a pointer or an address that indicates explicitly the location of the
node containing the successor of the list element.
      
Write a program to build a linked list by adding new nodes at the begining, at the end or in the middle of the linked list. 
Also write a function display() which displays all the nodes present in the linked list.

**i.c** : A stack is a data structure in which addition of new element or deletion of existing element always take place at 
the same end known as 'top' of stack. Write a program to implement a stack using a linked list. 

**j.c** : In a data structure called the addition of new elements takes place at end (called 'rear' of queue.), Whereas deletion 
take place at the other end (called 'front' of queue). Write a program to implement a queue using the linked list.

**k.c** : Write a program to implement in ascending order linked list. This means any  element that is added to the linked list 
gets inserted at a place in the linked list such that it's ascending order nature remains intact.

**l.c** : Write a program that receives wind speed as input and categorize hurricane as per the following table:
      
      Windspeed in miles/hour            Hurricance Category
      	74 - 95				1
      	96 - 110				2
      	111 - 130				3
      	131 - 155				4
      	> 155					5
**m.c** : There are five players from which the Most Valuable Player(MVP) is to be chosen. Each player is to be judged by 3 judges,
 who would assign a rank to each player. The player whose sum of rank is highest is chosen as MVP.Write a program to implement the scheme. 
       
