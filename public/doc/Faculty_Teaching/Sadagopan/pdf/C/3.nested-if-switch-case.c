#include<stdio.h>
// nested if
// switch case

void main()
{ 

int m, marks;

printf("enter the value of m");
scanf("%d", &m);
printf("enter marks");
scanf("%d", &marks);

if(m>0)
{	
	if (marks>=90)
	printf("grade S\n");
	else if(marks >=80)
	printf("grade A\n");
	else
	printf("grade B\n");

}

else 
{
printf("the value of m is less than or equal to zero");

}

// same code can be rewritten as follows;
//logical AND && logical OR ||

if(m>0)
{	

	if (marks>=90)
	printf("grade S\n");
	if(marks >=80 && marks <90)
	printf("grade A\n");
	if (marks <80)
		printf("grade B\n");	
}

if(m>0)
{	

	if (marks>=90)
	printf("grade S\n");
	if(marks >=80 || marks <90)
	printf("grade A\n");
	if (marks <80)
		printf("grade B\n");	

/*	else
	printf("grade B\n");
*/	


}

//%%%% the output of following two blocks are not same.
// Block 1
{
 if (marks>=90)
	printf("grade S\n");
	else if(marks >=80)
	printf("grade A\n");
	else
	printf("grade B\n");


} // Block 1 ends here

// Block 2
{
if (marks>=90)
	printf("grade S\n");
	if(marks >=80 && marks <90)
	printf("grade A\n");
	else
		printf("grade B\n");	

} // Block 2 ends here

// if suppose, marks=95, then Block 1 prints grade S, whereas, Block 2 prints grade S grade B




// another selection st: SWITCH CASE


int flag;
printf("enter the value of flag\n");
scanf("%d",&flag);

switch(flag)
{
	 case -1:   // if flag value is -1 then this case is executed
   		  printf("the value of flag is -1\n"); 
    		  printf("the value of flag is %d", flag);
    	          break;

	  case 1:   // if flag value is 1 then this case is executed
   		  printf("the value of flag is 1\n"); 
    		  printf("the value of flag is %d", flag);
    	          break;

	 case 0:   // if flag value is 0 then this case is executed
   		  printf("the value of flag is 0\n"); 
    		  printf("the value of flag is %d", flag);
    	          break;

default: printf("default"); // this block is executed if flag value does not match with any of the case labels.

}
// switch-case works as follows (i) control is transferred to appropriate case block based on flag value (any integer value) (ii) after executing case block, on seeing break statement, the system exits switch-case.  if no break is given at the end of case, then the next case is also executed and so on until it sees a case containing break.   If all case blocks are having no break, then system executes all case blocks starting from the case block to which control was transferred intially until default block. (iii) default is optional (iv) order of case blocks and default does not matter. (v) case labels can not be duplicated.  (vi) case labels must be an integer constant, can not contain variables.

// Order does not matter

switch(flag)
{
default: printf("default");

case 0: printf("case 0"); break;

case 25: printf("case 25"); break;

case 2: printf("case 2"); break;

case -5: printf("case -5"); break;

}

// case without break

switch(flag)
{
default: printf("default");

case 0: printf("case 0"); break;

case 25: printf("case 25"); 

case 2: printf("case 2"); 

case -5: printf("case -5"); break;

}
// if suppose flag=25, then the output is case 25 case 2 case -5.   Since the system encounters the first break at case -5, it terminates.


// following code results in error
/*
switch(flag)
{
default: printf("default");

case 0: printf("case 0"); break;

case 25-25: printf("case 25"); break; // expression is evaluated to '0', therefore, duplicate case label, same as case 0

case 2: printf("case 2"); break;

case -5: printf("case -5"); break;

case 3*4-1+6: printf("case label is an integer expression"); // any integer expression involving numbers work fine // float expression is not allowed.
}
*/

// following code results in error - uncomment

/*

switch(flag)
{
default: printf("default");

case 0: printf("case 0"); break;

case m+25: printf("case 25"); break; // expression involving variables not permitted.

case m-2: printf("case 2"); break;

case -5: printf("case -5"); break;

}

*/
// nested switch
switch(flag)
{
 case 4: 
	{ 
	   switch(m)
		{ case 1: printf("the value of m is 1\n");
		  break;
		  default: printf("the value of m is more than 1\n");
		      break;

	        }
	break;
 	
	}   // any block of statements can be given inside a case


 case 4<flag<10: printf("the value of flag is 3\n");
													
default: printf("the value of flag is more than 3\n");  // default is optional, break in default is optional
}


/* // switch cannot take float variable as an input
float INT=3.0;

switch(INT)  
{
	case 3.0: printf("the value of INT is 3.0");

	
} */

// Are IF and SWITCH equivalent

marks=67;
if(marks >=90) // >= greater than or equal to operator (relational operator)
printf("grade S\n");
if (marks >=80 && marks < 90)  // && logical AND operator - that is, if expression 1 (marks >=80) and expression 2 (marks < 90) 
printf("grade A\n");
if (marks <80)
printf("grade B\n");

// the equivalent switch-case expression for the above code


switch (marks>=90)
{
case 1:
 printf("grade S"); break;
case 0:

{
switch (marks>=80)
{
case 1: printf("grade A"); break;

case 0:
printf("grade B"); break;

}
}
}

// for every IF there is an equivalent SWITCH and vice versa.

// switch containing statements outside case labels

switch(flag)
{
printf("there are statements outside case block"); // this will not be executed

default: printf("default"); break;

printf("i am between default and case"); // this will not be executed

case 0: printf("case 0"); break;

printf(" i am between cases"); // this will not be executed

case 25: printf("case 25"); break; 

case 2: printf("case 2"); break;

case -5: printf("case -5"); break;

}



}
