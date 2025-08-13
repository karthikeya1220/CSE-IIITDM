// introduction to functions, pointers, recursive functions for Factorial and Fibonacci 

#include<stdio.h>


/*
// uncomment and run
// since 'k' is global, the printf below the recursive call prints '4' (the last value of 'k').  If 'k' is local 

int k=0;

void main()

{

k++;

printf("the iteration number %d of main function \n", k);

if(k>3)

return;

main();  // main() itself is called recursively.

printf("%d\n",k);


}


*/


int recursive_factorial(int n)
{

if(n < 2) return 1;

else return n * recursive_factorial(n-1) ;

}

// TRACE of recursive_factorial

/*
1. For n=4, recursive call performs 4 * recursive_factorial(3) which inturn gives 3 * recursive_factorial(2) followed by 2 * recursive_factorial(1).  Now if condition is true and it returns 1.  The recursion bottoms out (no more recursive call) and the value of recursive_factorial(1) = 1.  The compiler now, performs the multiplication 4 * 3 * 2 *1 = 24.  

2. The factorial value is returned to main() which is stored in the variable factorial.
*/



////////////////
// nth fibonacci number
///////////////

fibonacci(int n)
{

if (n==0 || n == 1)
return 1;
else return fibonacci(n-1) + fibonacci(n-2);
}

/*
TRACE of fibonacci

1. For Fibonacci(4), recursive call yields fibonacci(3) + fibonacci (2).   Using recursion, fibonacci(3) is computed; i.e., fibonacci(3) triggers fibonacci(2) + fibonacci(1).  Further fibonacci(2) triggers fibonacci(1) and fibonacci(0).    Now, recursion bottoms out and both fibonacci(1) and fibonacci(0) return 1.  thus, fibonacci(2) is 1 + 1 =2.  fibonacci(3) = 2 +1 =3 and fibonacci(4) = 2 + 3 = 5.

2. While computing fibonacci(4), observe that fibonacci(2) is computed once for fibonacci(3) and the other for fibonacci(2) itself.  Thus, there is a overlap between subproblems.

*/



////////////////
// swapping with pointers
////////////////

// swapping two variables

swap(int *p, int *q)
{

printf("the value p and q before swapping %d %d \n", *p, *q);
*p=*p+*q;
*q=*p-*q;
*p=*p-*q;

printf("the value p and q after swapping %d %d\n", *p, *q);
}



void main()
{

int n,factorial;

printf(" Enter the value of n for which factorial to be calculated");
scanf("%d", &n);
factorial=recursive_factorial(n);
printf("factorial of n is %d \n",factorial);

////////////
// printing fibonacci series
////////////

printf("enter n upto which fibonacci series to be generated");
scanf("%d",&n);

for(int i=0; i <=n; i++)
printf("%d ",fibonacci(i));



///////////
// pointers
///////////

int s=5;
int *t; // integer pointer - pointer to an integer
t=&s; // t contains the address of 's'

printf(" the address of s is %x  %x  %p %d\n ", t, &s,t,t);  // %x - hexa format %p - exclusively for printing pointer's address  %d - prints decimal equivalent 
printf(" the value stored at s is %d %d \n", s, *t);
printf("the address of t is %x %p\n", &t, &t);

//t=0x546; - any assignment leads to segmentation fault  ; no explicit assignment is permitted.




printf("Introduction to pointers \n");

int x,y;

printf("the value of x and y before swapping %d %d \n", x,y);

swap(&x,&y); // & memory re-direction operator - address of x is passed.   *p - 'p' gets the address of 'x' and *p refers to the content of the variable pointed by 'p'.  Thus *p refers the value of x. 

printf("the value of x and y after swapping %d %d \n", x,y);


}









