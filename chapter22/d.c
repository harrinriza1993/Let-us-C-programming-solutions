/* (d) Write a program to read and store information about insurance policy holder. The information
       contains details like gender, whether the policy holder is minor/major, policy name and 
       duration of the policy. Make use of bit-fields to store this information.
*/

#include<stdio.h>

// Genter
#define MALE 0;
#define FEMALE 1;

// Status
#define MINOR 0;
#define MAJOR 1;

// Policy name
#define INSURANCE 0;
#define TOURIST 1;
#define FESTIVAL 2;

// Duration
#define ONEYEAR 0;
#define TWOYEARS 1;
#define THREEYEARS 2;
#define FOURYEARS 3;

void main()
{
	typedef struct policy_holder
	{
		unsigned gender : 1;
		unsigned status : 1;
		unsigned policy_name : 2;
		unsigned duration : 3;
	}policy;
	
	policy p;
	
	p.gender = FEMALE;
	p.status = MAJOR;
	p.policy_name = FESTIVAL;
	p.duration = TWOYEARS;
	
	printf("The policy information detail is\n");
	printf("Gender is %d\n", p.gender);
	printf("Status is %d\n", p.status);
	printf("Policy name is %d\n", p.policy_name);
	printf("Duration is %d\n", p.duration);  
	
}

