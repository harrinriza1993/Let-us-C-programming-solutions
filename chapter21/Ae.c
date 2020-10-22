/* (e) In order to save disk space information about student is stored in an integer variable. If bit number 0 
      is on then it indicates Ist year student, bit number 1 to 3 stores IInd year, IIIrd year and IVth year student 
      respectively. The bit number 4 to 7 stores stream Mechanical, Chemical, Electronics and CS. Rest of the bits store 
      room number. Such data for 4 students is stored in the following array:
      
      		int data[ ] = { 273, 548, 786, 1096 } ;
      		
      write a program that asks for the room number and displays the information about the student, if its data exists 
      in the array.  
*/

 #include<stdio.h>


void main() {

unsigned int yr,br,data_yr,data_br;
int i,j,k,rn,a,b,flag=0;
int data[]={ 273,548,786,1096};



printf("Enter room number: ");
scanf("%d",&rn);

printf("\n\n\n  Year: ");


/*********************/
/* checking for year */
/*********************/


for(i=1;i<=8;i=i*2) {

yr= rn & i;

if(yr==1)  {
printf("First year");
break;
}

if(yr==2) {
printf("Second year");
break;
}

if(yr==4)  {
printf("Third year");
break;
}

if(yr==8) {
printf("Fourth year");
break;
}

}

/***********************/
/* Checking for branch */
/***********************/


printf("\n\nBranch: ");

for(i=16;i<=128;i=i*2) {

br= rn & i;

if(br==16)  {
printf("Mechanical");
break;
}

if(br==32) {
printf("Chemical");
break;
}

if(br==64) {
printf("Electronics");
break;
}

if(br==128) {
printf("I.T.");
break;
}

}


/***********************************************/
/* checking if data matches with that of array */
/***********************************************/


for(i=1,j=16;i<=8,j<=128;i=i*2,j=j*2) {


yr=rn&i;

br=rn&j;

for(k=0,a=1,b=16;k<4,a<=8,b<=128;k++,a=a*2,b=b*2) {

data_yr=data[k] & a;

data_br=data[k] & b;

if(yr==data_yr && br==data_br) {

flag+=1;

break;

}

}

}

if(flag==0)
printf("\n\n\ndata doesn't matche with the array.\n");

else
printf("\n\n\ndata matches with the array.\n");


}

