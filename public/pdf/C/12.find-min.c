#include<stdio.h>

void main()

{

//Logic : Find Min among five numbers

////////////
// using just if
////////////

int x1,x2,x3,x4,x5;
int minimum = x1;

  if(minimum > x2) minimum = x2;
  if(minimum > x3) minimum = x3;
  if(minimum > x4) minimum = x4;
  if(minimum > x5) minimum = x5;


// use of else if without for loop leads to incorrect result.

////////////////////////////
// using else if and for
////////////////////////////
int a1,a2,a3,a4,a5;
int min=a1;

 for(int i=1; i < 5; i=i+1);

  {  
    if(min > a2) min = a2;

    else if(min > a3) min = a3;

    else if(min > a4) min = a4;

    else if(min > a5) min = a5;
  }

// the above logic is not scalable.  if we wish to find minimum in a set of 1000 elements, then we need to declare 1000 variables and 1000 if-else statements.  To overcome this problem, one can work with arrays and for loops.

///////////////////////
// arrays and for loop
//////////////////////

int a[1000];
int m;
for(int i=0; i<1000; i=i+1)
{

 printf("enter the value of location %d",i);
 scanf("%d",&a[i]); 

}
 m=a[0];

for(int i=1; i<1000; i=i+1)
  if (a[i] < m) m=a[i]; 





}
