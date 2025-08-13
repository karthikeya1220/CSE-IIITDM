#include<stdio.h>
// Ada language -- Ada Lovelace -- the first women computer scientist
// B language - predecessor to C
// BASIC, Pascal, FORTRAN, COBOL - Predecessor to C 
// structured programming involves (i) sequence statements (ii) selection sts (iii) repetition statements
// sequence sts - declaration, assignment, scanf, printf
// selection sts - if-else-if, switch case
// Repetition sts - for loop, while loop
// There exists a structured program for any solvable problem 

// uncomment each block to understand the code better

// FOR LOOP

/* // syntax

for(initial condition; condition to decide the termination of the for loop ; increment)
 loop is executed whenever the condition is true
{ for block }

*/

void main()

{ int i;
	for(i=1; i<=10; i=i+1)
{ 
 	printf("i am inside the loop, the value of i is %d\n", i); // prints 1,2,...,10
}
 	printf("i am outside the loop, the value of i is %d\n", i);  // i =11, when for condition is false, the value of i=11

// for-loop works as follows; (i) at the start 'i' is set to '1' and this statement is executed exactly once (ii) condition check is done next; since 1 <=10 is true, the control enter FOR-BLOCK (iii) after completing for-block, the control is transferred to increment instruction and 'i' is incremented by '1'.   Further, condition check is done and enter for-block.  (iv) condition check, executing for-block, increment done in cyclically until the condition is false.

/* 

for (expression1, expression2, expression3)

expression1: initialization  Example: int i=1, j=1, k=1;   // comma operator ensures all three initializations are done in sequence

expression2: conditional check:  Example i<=10, j <=5, k<=3  // comma should NOT be used in logical expressions, if used, then the LAST item is considered and the rest are ignored.  Use logical AND.

expression3: increment operator i=i+1 or i++ or i+=1 or ++i

expression2 - is a test done by the compiler to check whether to enter for-loop block or not.  This is as good as checking using IF statement and hence expression2 returns a logical value 0/1.
*/
//%%%%%%%%%%%%%%%%%%%
// Playing with FOR
//%%%%%%%%%%%%%%%%%%%


for(int j=1; 0 ;j=j+1) // it does not enter for loop block as the logical value associated with the condition is false always

for(int j=1; -1;j=j+1)

for(int j=1; 5 ;j=j+1)  //enter the loop block for -1 and 5 since the logical value is true always -- program does not terminate and enter infinite loop
{
}
//%%%%%%%%%%
int j=-2;
for( j=j+1; j<4 ; j=j)
{
printf("the value of j is %d \n", j);
}

printf("i am outside - the value of j is %d \n ", j);

//%%%%%%%%%%%%%%


//%%%%%%%%%%%%%%%%%%%%%%%%
// LABELS
//%%%%%%%%%%%%%%%%%%%%%%%%
// Introduction to Labels - each statement can be labelled with a label (like statement number)
// Using labels, transfer of control is possible from one place to other.
// transfer to declaration statement,  main function not permitted.




// l3: int i;  goto l3;  // error


l1:   // like numbers, labels refer to a statement using which control can be transferred from one place to other

// goto ;  // error as there is no identifier/label

// for (expression1, expression2, expression3) is equivalent to writing

/*
expression1;

label:  if(expression2)
	{
	  for-block
	}
	expression3;
goto label;

*/

//%%%%%%%%%%%%%%%%%%
// Local vs Global variables
//%%%%%%%%%%%%%%%%%%

{
int i=412;  // global var (assuming this is main function) - active throught prog

for(int i=0; i<5 ; i=i+1) // conflict between local and global - local gets the preference
{
printf("the value of i is %d \n", i); 
} // scope of local 'i' is lost 

printf("i am outside for, the value of i is %d \n", i); // global i is activated

}
/*

iteration 1; i=0, i < 5 = 0 <5 true enters the for block ; prints the value of i=0; i=i+1 ; i=1

iteration 2; no initialization ; 1 < 5 - true - enter the block - print i=1; i=1+1=2

iteration 3; no initialization ; 2 < 5 - true - enter the block - print i=2; i=2+1=3

it-4 prints 3; i=3+1=4

it-5 printf 4; i=4+1=5

it-6 5 < 5 false does not enter the block - exit 

the st FOR - is executed 6 times ; for block is executed - 5 times

*/



for(j=1; j<=2 ;j=j+1)
{ 
 	printf("i am inside the loop, the value of j is %d\n", j);
	break;
}
printf("i am outside the loop, the value of j is %d\n", j);

// about break st - the loop is executed exactly once and comes out of the loop due to break
// break statement can be used at two places in a program (i) inside switch-case (ii) inside for/while loop.   No other block can use break statement.


//%%%%%%%%%%%%%%%
// Some insights into FOR
//%%%%%%%%%%%%%%%
int h;
for(h=1; h==1 ;h=h+1)
{ 
 	printf("i am inside the loop, the value of h is %d\n", h);
	break;
}

// expression 2 is logical expression and hence it returns true.

/*   

for (int k=1; if(k>0); k++)   // Error as we cannot give conditional expression -- will be treated like if(if(k>0))
{

printf(" for loop with if expr ");

}


printf( for(int k=1; k>0; k++), printf(" for loop with if expr "));  

// does not work as printf expects number/char whereas for() does not return anything

*/

int counter=0,m=32;


// for(int k=1; k<m; k=k*2)  // as part of increment one can use expression such as k=k+2, k=k*2, k=k/2, k=k^2 (xor) - any arithmetic

// for(int i=1,j=1,k1=1 ; (i<=10 && j >=1) ; i++, printf("i am in for loop"), j++, j=j+i)

//expression 2 - logical exp - && (logical AND) || (logical OR)
//expression3 - can be any set of statements

// for(int k=1; k<20 ; )   - if k is not updated inside the loop, then loop runs for ever.

//for(int r=1; r<3; r++, for(int l=1; l<3; l++, printf("for inside for") ) )

// for inside for does not work if it is given like the above expression.  However, the same functionality can be achieved using the following for; 

/*
for(int r=1; r<3; )
{ 
r++;
for(int l=1; l<3; l++, printf("for inside for\n") ) ;
}
*/

int k=1;

/*  logical OR in expression2

for(; (k<m || k<20); k=k*2)
printf("123\n");

*/

//for(; k<m, k>20; k=k*2)
//printf("123\n");

// due to comma, the last expression in expression2 gets executed, i.e, k>20 which is false in the first iteration itself and hence, the control moves out of the loop and prints the value of counter as '0'

//for(; (k<m && k>-2); k=k*2) // logical AND, stops after 5 iterations

for(; k>-2; k=k*2)
{
printf("123\n");
counter++;  // After 31 iterations, the value of k wraps around the range and hence it becomes less than -2
}
printf("the value of the counter is %d\n",counter);

//for( ; (k>-2&&k<m); k=k*2) // logical AND, stops after 5 iterations

//for( ; k>-2,k<m; k=k*2)  // stops after 5 iterations, the last expression gets the preference

//for( ; ((k>-2)||(k<m)); k=k*2) // infinite loop, even if k wraps around, k <m is still true and hence infinite loop.

//for( ; k<m,k>-2; k=k*2)  // stops after 31 iterations, the maximum number. Due to comma operator, the last expression is considered.   After 31 iterations, the value of k wraps around the range and hence it becomes less than -2



//%%%%%%%%%%%%%%%%%%%%%%%%%%%
// INTRODUCTION TO WHILE LOOP
//%%%%%%%%%%%%%%%%%%%%%%%%%%%
//BASIC SYNTAX
/* while(condition)
{

}

// the functionality of FOR can be implemented using WHILE and vice versa

expression1;
while(expression2)
{
expression 3;

}
*/

int a=1;
counter=0;
while(a < 128)
{

a=a*2;

printf("the value of a is %d \n", a);

counter=counter+1;

printf("the value of counter is %d \n", counter);

}

printf("outside while loop- count is %d \n", counter);


// a= 2, 4, 8, 16, 32, 64, 128 ( 128 < 128 - false exit the while loop)

// inside counter=1,2, 3, 4, 5, 6, 7
// outside counter = 7



/*

int z;
printf("enter the value of z\n");
scanf("%d",&z);
while(z<=15)
{

printf("the value of z is %d\n",z);
z=z+2;
}


//%%%%%%%%%%%%%%%%%%%%%%%
// Playing with WHILE
//%%%%%%%%%%%%%%%%%%%%%%%

while(z=4)  // non-zero assignment, returns '1', infinite loop
{
printf("i am inside while loop ");
}

while(1) // returns '1', infinite loop
{
printf("i am inside while loop ");
}
printf("i am outside while loop ");


while(0) // false always, exits while
{
printf("i am inside while loop \n");
}

printf("i am outside while loop \n ");

// the following check throws error

while(while(1))   // there is no return value for while similar to for
{
printf("while inside while\n");
}

*/


//%%%%%%%%%%%%%%%%
// simulating IF through while/for
//%%%%%%%%%%%%%%%%
/*

if(a>=0)  // while
{

}
else // a<0 not in while
{

}

// can the above if-else structure be expressed using while/for loop. Use one while/for to check if condition and another while/for to check else condition; use break so that while/for terminates after one iteration.

*/

// if semicolon is given at the end of while loop, then if while condition is true, then while loop executes semicolon (empty statement) for ever (infinite loop) 

// if semicolon is given at the for loop, then for loop is executed iteratively until expression2 is false, and then it enters the for loop block.

// for(i=0 ; i <10; i++);  printf("%d",i); // the value of 'i' is 11

// In the following, using goto st, one can execute the statements inside while loop irrespective of the truth value of the condition


a=-1;

while(a>=0);
{
l3: printf(" i am inside while loop although condition is false\n");
}

//goto l3;

//%%%%%%%%%%%%%%%%%%%%%%
// More on local and global variable declaration
//%%%%%%%%%%%%%%%%%%%%%%
{

int m=5;
printf("the value of m is %d\n",m);
// scope of m=5 is restricted to this block

}

// m is undefined  outside the above block

{
int m=6;
printf("the value of m is %d\n",m);
}
// m is undefined  

{
int m=7;
printf("the value of m is %d\n",m);
}

// all of the above three declarations are local and scope is restricted to that block.

// for (int i=0; i < 10 ; i++ );  // note: there is a semicolon; scope of i is restricted this loop
 // printf("%d",i);  // i is undefined.

/* // infinite loop
for(; ;)
{

}
*/

// because of the above for, the control will run into an infinite loop and sts following will never be executed.

/*
{
// the following for runs for ever as there is semicolon at the end
int n;
for(n=1; ;);
{
printf("the value of n is %d\n",n);
//break;
}

// since there is a semicolon at the end of for, the for block will be treated as a sequence sts and hence break st cannot be used.  break can be used in for/switch/while as long as there is no semicolon at the end.

}

for(i=1; i=i+1; i<1)

printf("strange for"); 



for(i=printf("%d",scanf("%d",&i)); i < 5 ; i =i+1)

printf("for-scanf-printf\n");


for(i=scanf("%d%d%d%d%d",&i,&i,&i,&i,&i); i < 8 ; i=i+1)

printf("scanf inside for \n");



*/

}
