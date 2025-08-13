// sequence statements; declaration, assignment, input/output statements - the execution of these statements in order as they appear in the code
// we shall introduce selection statements  using which one can take decision which decides which part of the code to be executed next.
/*
if(expression)
{
this block will be executed if expression is true
}
else
{
this block will be executed if expression is false
}

*/
#include<stdio.h>

void main()
{

	int a=100, b=39, c=5,d;
	float x=2, y=3, z=5;
// = operator meant for assignment ;  == comparison operator
if(a==100) // checking whether 'a' equals 100, if yes, then the expression returns logical value=1
{
printf("value of a=%d, a+1=%d \n", a, a+1);
x=y+z;
a=b+c;
}
// else block is optional

if(x=y+z)  // x=2+3=5, this expression returns logical value=1
printf("if with expression\n");
// for any non-zero assignment, if block is executed.  if the result of expression is zero, then else block.  if there is no else block, then the compiler skips if-block and executes a statement following if-block.

x=(float)b/c;  // type case the result of division to a float value and assign it to 'x'
printf("the value of x after division %f\n",x);

if(a==100) 
printf("the value of a is %d\n",100);
else; // empty statement
printf("the value of a is not %d \n",100); // outside else block

int marks=67;
if(marks >=90) // >= greater than or equal to operator (relational operator)
printf("grade S\n");
if (marks >=80 && marks < 90)  // && logical AND operator - that is, if expression 1 (marks >=80) and expression 2 (marks < 90) 
printf("grade A\n");
if (marks <80)
printf("grade B\n");

if(-1)
printf("-1\n");
else
printf("something\n");

if(0)
printf("0\n");
else
printf("else");

if(5)
printf("5\n");
else
printf("something\n");

//%%%%%%%%%%%%%%%%%%%%%%%%%%
//    Playing with IF
//%%%%%%%%%%%%%%%%%%%%%%%%%%

if(a==5);  // semicolon after if is an empty statement which is executed whenever 'a' is 5.  IF block contains just semicolon.
 printf("just if block\n");    //this statement is always printed as it is outside IF

// the following code shows an error.  //uncomment the following code to see error message
/*
{
if(a==100);  // IF block contains semicolon
printf("the value of a is %d\n",100); // outside IF  - this is simple IF and no ELSE
else // this else has no corresponding IF
printf("the value of a is not %d \n",100);
}
*/
/*
// the following code shows an error.  //uncomment the following code to see error message
{
if(a==100);  // IF block ends here
printf("the value of a is %d\n",100);  // outside IF and no ELSE
else; // else without corresponding IF
printf("the value of a is not %d \n",100);
}
*/
///////////////

if(a=5);  // IF condition is always true, assigns '5' to 'a'.  executes semicolon.

printf("the value of a is %d\n",a); // a=5, outside IF

if(a!=3)  // check whether the value of a is 3 or not ? if yes, enter IF block otherwise enter ELSE block
{
printf("the value of 'a' is %d\n",a);
printf("another statement\n");
}
else
printf("yet another statement \n");


if(a=0) //assigns 0 to 'a' -- logical value associated with the statement is '0'
{
printf("the value of 'a' is %d\n",a);
printf("another statement after..\n");
}
else
printf("the value of a is %d \n",a);

// the following statement throws an error as IF statement does not return anything.
// printf("if inside print %d", if(5));


x=5.00000;
if(x==5.0)
printf("inside if \n");
else
printf("inside else \n");

/*
//The following code shows an error.
// a=b;  a: lvalue  b: rvalue ; lvalue refers to a var name or a location in RAM ; rvalue - expression / some number

if(1=1)  // lvalue - l: left,  rvalue - r: right 
printf("checking whether 1 equals 1");
else
printf("inside else");

*/

if(printf("  "))  // prints spaces - returns the number of white spaces printed which is a non-zero integer - enters if block

if(printf("")); //no white space is displayed - returns '0' - enters else block
else
printf("printf inside if");


if(printf("printf inside if"))
printf("printf inside if");

} 
