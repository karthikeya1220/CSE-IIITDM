#include<stdio.h>

// how do you test whether a 4-digit number is divisible by 3 or not


/////////////////////////////
// Divisibility by 3
////////////////////////////

//Logic 1

void main()
{
// Logic 1

int num;

if (num%3==0) printf("div by 3");
else printf("not div by 3");


//logic 2


// a number is div by if its sum of its digits is div by 3

int a=1234;

int d2=a/1000; // 1234/1000; 1.234 ; d2 gets '1'
int d3=a%1000; // d3=234
int d4=d3/100 ; // 234/100 = 2.34 ; d4=2
int d5=d3%100; // d5=34;
int d6=d5/10; // 34/10=3.4 ; d6=3
int d7=d5%10; // d7=4

int d8=d2+d4+d6+d7;

int d9=d8%3;  // if d9=0 then  a is div by 3 o/w not


// logic 3

int b=a/3;

b=b*3;

if(a==b) printf("yes");
else printf("no");

// Logic 4

// suppose a=123456; convert 'a' to single digit,  1+2+3+4+5+6=21 ; 2 +1 = 3 ; if single digit is 3/6/9 then a is div by 3 o/w not


///////////////////////////////////////////
// divisibility by 4
///////////////////////////////////////////


// logic 1

// extract the last two digits (xy) and check whether xy % 4 is '0'


// logic 2

// (i) check a % 2 =0 ; (ii) perform a=a/2 ; (iii) check again a % 2 =0


// logic 3

// perform a = a*2 // extract the last three digits (xyz) and check whether xyz % 8 is '0'


// logic 4

// extract last two digits ; a= 1292 ; subtract 20 from 92 repeatedly until the result is below 20 -- 12  if the result is {0,4,8,12,16} then declare a is div by 4

// a mod 8 ; b = a%8 ; if b= {0,4}; then it is divisible by 4;

// a mod 12 ; b = a%12 ; if b= {0,4,8}; then it is divisible by 4;


// Logic 5


// extract the last two digits ; xy ; check whether 2x+y is div by 4 ;




}
