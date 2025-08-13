#include<stdio.h>

void main()
{

// Logic 1

// swap the contents of variables 'a' and 'b'

int a=2, b=3;  // 
int c;  // temp variable

printf("the value of a=%d, b=%d before swap\n",a,b);

c=a;  // c=2
a=b; // a=3
b=c; // b=2

printf("the value of a=%d, b=%d after swap\n",a,b);



// Logic 2

int x=10, y=20;

printf("the value of x=%d, y=%d before swap\n",x,y);

printf("the value of x=%d, y=%d after swap\n",y,x);

// the above logic does not change the content


// Logic 3

int w=5, z=4;

printf("the value of w=%d, z=%d before swap\n",w,z);
w=w+z;  // w=9
z=w-z; // z=9-4=5
w=w-z; // w=9-5=4

printf("the value of w=%d, z=%d after swap\n",w,z);

short int a1=65535, b1=1;  // the size of short is 2 bytes - 16 bits - the decimal equivalent of 11111...111 is 65535 
// the addition 65535 and 1 exceeds the range supported by short int, however, since gcc does wrap round, the swap is done with perfection.

a1=a1+b1;  // 65535 + 1 = 65536 which is -65536
b1=a1-b1; // -65536 -1 = -65537 which is 65535
a1=a1-b1; // -65536 - 65535 = 1

printf("the value of a1=%d, b1=%d after swap\n",a1,b1);

// Logic 4

//a =2 , b=3

a=a*b; // a=6  a=65535 b=6553
b=a/b; // b=6/3=2
a=a/b; // a=6/2=3

// the above logic works as long as b is not zero


// swap logic may not work if two float numbers are swapped OR if one number is int and the other number is float

int a2=10;
float b2=1.2;

b2=a2+b2;  //  10 + 1.2 =11.2
printf("the value of a2 %d\n",a2);
a2=b2-a2; // 11.2-10 =1.2  since a2 is int, it gets '1'
printf("the value of b2 %f\n",b2);
b2=b2-a2; //  11.2-1=10.2 
printf("the value of a2 %d\n",a2);

printf("the value of a2=%d, b2=%f after swap\n",a2,b2);



// Logic 5 - another logic to swap numbers

int a=2, b=3;
a=a+b-(b=a); // 2 + 3 - (b=2) 2+3-2
printf("%d%d",a,b);


// Logic 6 - yet another logic

// we below sketch the logic 

/*
x=x^y // implement using pow() function
y=x^{1/y} // implement using pow() function
x=log_y x // can be implemented using math.h or implement Taylor's series
*/

// Trace of the above logic

/*
x=2 y=3

x=2^3=8 
y=8^{1/3}=2
x= log_2 8 = 3

*/

// Logic 7 

/* x=2 y=3

  z=3-2=1
*/
z=y-x;
x=x+z;
y=y-z;


// Logic 8

x=x-y;
y=x+y;
x=y-x;
















}
