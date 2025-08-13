#include<stdio.h>

// Objective is to print individual digits of an integer

// (i) input is a 4-digit number o/p print the number digit-wise 

void main()
{

int a=1234; // a has k digits where k is a fixed integer 

// this logic works fine as long as k is a fixed integer

// i/p: a ; a div 10 ; a mod 10 ( leaves the remainder on a div 10)

int d1=a%10; // 1234 % 10 - remainder - 4 gets stored in d1

int d2=a/1000; // 1234/1000; 1.234 ; d2 gets '1'
int d3=a%1000; // d3=234
int d4=d3/100 ; // 234/100 = 2.34 ; d4=2
int d5=d3%100; // d5=34;
int d6=d5/10; // 34/10=3.4 ; d6=3
int d7=d5%10; // d7=4



printf(" the output of logic 1 %d  %d  %d  %d \n \n", d2,d4,d6,d7);


//logic 2

int x=1234;

int x1=x/1000;  // x1=1

int x2= ( x- x1*1000 )/100; // 1234 - 1000 /100 = 2.34 ; x2=2

int x3=( x - x1*1000 - x2*100 ) / 10 ; // 1234 - 1000 - 2*100 =34/10 ; x3=3

int x4= (x - x1*1000 - x2*100 - x3*10 ) /1 ; // 1234 - 1000 - 200 - 30 /1 = 4

printf("\n \n the output of logic 2 is %d \n  %d \n %d \n %d \n\n", x1,x2,x3,x4);




// logic 3 - variant of logic 1

// d3, d5 - redundant -- use 'a' to overwrite

//int d1=a%10; // 1234 % 10 - remainder - 4 gets stored in d1

int d21=a/1000; // 1234/1000; 1.234 ; d2 gets '1'
a=a%1000; // a=234
int d41=a/100 ; // 234/100 = 2.34 ; d4=2
a=a%100; // a=34;
int d61=a/10; // 34/10=3.4 ; d6=3
a=a%10; // a=4

printf("the output of logic 3 %d %d %d %d \n \n",d21, d41, d61, a);


// logic 4 - variant of logic 3
a=1234;

int d9=a/1000; //  1234/1000; 1.234 ; d2 gets '1'
printf(" %d \t ",d9);  //\t - tab space - 4 spaces/ 5/7/8
a=a%1000; // a=234
d9=a/100 ; // 234/100 = 2.34 ; d4=2
printf(" %d \t ",d9); 
a=a%100; // a=34;
d9=a/10; // 34/10=3.4 ; d6=3
printf(" %d \t ",d9); 
a=a%10; // a=4
printf(" %d \t \n \n",a); 



// logic 5

a=1234;
printf("\n logic 5 \n \n");
 printf("%d %d %d %d %d", a/1000, (a%1000)/100, (a%100)/10, (a%10), a);

//Logic 6

// 12345 - reverse the number - 54321, while reversing, one can get individual digits.

int p=12345;
int d1=p%10; // extracts the remainder 'mod' operator 
p=p/10; // 12345/10 =1234.5 , since p is int, p gets 1234
int d2=p%10; // 1234/10; 4 
p=p/10; //
int d3=p%10;

p=p/10; //
int d4=p%10;
p=p/10; //
int d5=p%10;

printf("the value of d1 is %d\n", d1);
printf("the value of d2 is %d\n", d2);
printf("the value of d3 is %d\n", d3);
printf("the value of d4 is %d\n", d4);http://cse.iitm.ac.in/listpeople.php?arg=U2Nob2xhcnMhMTEkMA==
printf("the value of d5 is %d\n", d5);


printf("the reverse of 12345 is %d%d%d%d%d\n",d1,d2,d3,d4,d5);


//Logic 7

int q=2345,q1,q2,q3,q4;
printf("the value of q is %d\r",q);
scanf("%1d%1d%1d%1d",&q1,&q2,&q3,&q4);
printf("the reverse of q is %d%d%d%d",q4,q3,q2,q1);
 
}
