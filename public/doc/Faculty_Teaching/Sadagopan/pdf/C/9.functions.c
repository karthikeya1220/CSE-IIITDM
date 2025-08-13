#include<stdio.h>

////////////////////////////////
// FUNCTIONS
///////////////////////////////

// computation to be done can be grouped into several modules (functions)
// main() is also function, by default, executed first always.


int a,b; // global variables, active throughout the program, if the same variables are declared again as local, then local gets preference over global.  when the scope of local is lost, scope of global resumes.  global variables can be used/manipulated in any function.

// global variables are declared outside all functions.

// function prototype - if function defintion is given after main then prototype is required, otherwise it is optional.

input();
process();
output();
int function_argument(int a, int b);
int fun_arithmetic();
int swapwoptr(x,y);
recursivefunction(int);

// main() is also function/module


void input()
{
printf("enter two numbers");

scanf("%d %d", &a,&b);


}


void process()
{

printf("the value of a = %d and b= %d before arithmetic \n",a,b);
a++;
b++;

printf("the value of a = %d and b= %d after arithmetic \n",a,b);

}


void output() // void - returns nothing
{
printf("the value of a = %d and b= %d after arithmetic \n",a,b);

}



void main()
{

int array[3];

input(); // function call

process();  // calling the function process()

output(); 

//////////////////

int d=function_argument(a,b);


printf("%d",d);

///////////////

printf("\n Passing Arrays \n");

passarray(array);

printf("On Return-the content of array after arithmetic is %d %d %d \n", array[0],array[1],array[2]);


//////////////////////
int m=fun_arithmetic();
printf("%d",m);

//////////////////////

int x=4, y=29;


printf("Introduction to Non-pointers \n");

printf("the value of x and y before swapping %d %d \n", x,y);

swapwoptr(x,y);

printf("the value of x and y after swapping %d %d \n", x,y);


////////////////

recursivefunction(2);  // while calling the function initial value is set

}


/*

1. On executing a.out, the first function that the compiler executes is main().   Then, the compiler executes each statement in main() in order.   When main() encounters built in functions such as printf/scanf, the control is transferred to stdio.h  and the defintion of scanf/printf is given in stdio.c.   Accordingly, the instructions in main() using printf/scanf is executed in order.   

2. For user defined functions which are called from main(), the definition is given in the program itself.  the position of function definition can be before main() or after main().   Accordingly, compiler decides the need for prototype.  prototype is just the name of the function given after 'include files' to indicate the compiler that there are user defined functions whose definition may appear after main().   if function definition is given before main(), then while compiler scanning the program from the beginning, it encounters user defined functions first whose information is recorded in some part of the memory so that when a function is called from main(), reference is  redirected to the part of the memory where definition is stored.

3. In this program, user defined functions input(), process(), output() - whose defintion is given before main().  Therefore, prototype is optional.  

4. Return type - any function if it does some arithmetic using data members (int, float, char, arrays), then the result of computation can be returned to the called function using 'return' command.  It is possible to return a single variable or an array.  Returning multiple variables such as " return a,b,c " is not permitted.

5. By default, arrays are passed by reference (the address of the 0th location is passed through pointers)

6. if the return type is void then function returns nothing.   By default, the return type of any function is int.
*/



/////////////////////////////////
// Functions with arguments
////////////////////////////////

int function_argument(int a, int b)  // prototype is given as the definition appears after main() ; the function returns an int and hence the return type is mentioned as int
{

int c;
c=a ^ b;  // a xor b
printf("%d",c);
return c; // the result of the computation which is an integer is return to the called function (main)

}


////////////////////////
// Array as an argument
////////////////////////

int passarray(int arr[3])
{

printf("the content of array is %d %d %d \n", arr[0],arr[1],arr[2]);
arr[2]=arr[0]+arr[1];
printf("the content of array after arithmetic is %d %d %d \n", arr[0],arr[1],arr[2]);

// no need to give return statement. change done in the function is automatically reflected in the called function as arrays are passed by reference.

}


/*
Remarks

1. int passarray(int arr[]) - this definition will also work fine

2. int passarray(int arr[30]) - this will also work, the first three locations are mapped to the calling array; array[3]

3.  To pass an array, the syntax is passarray(array).  Note that passarray(array[3]) does not pass the entire array, instead, it passes just the 3rd element.

4. Intenally, array[0] and arr[0] refer to same memory location; similarly, array[1] and arr[1] refer to same meory location.  Due to this reason, any update with respect to 'arr' is reflected in 'array' as well.

*/


//////////////////////////
// Arithmetic with functions
/////////////////////////

// functions are just like data members, therefore, addition of two functions, multiplication, etc., can be performed.

int fun_arithmetic ()
{

return printf("hello") + printf("world");  // this will return 5+5 = 10 to main()

// return printf("hi") + scanf("%d",&a); // a function can not have two return statements.


////////////////////////////
// Swpping two variables using functions
///////////////////////////


// swap without pointers

swapwoptr(int p, int q)
{

printf("the value p and q before swapping %d %d \n", p, q);
p=p+q;
q=p-q;
p=p-q;

printf("the value p and q after swapping %d %d\n", p, q);

// since the scope of 'p' and 'q' is limited to this function, any updates on 'p' and 'q' will not be reflected in main().
// To overcome this, similar to arrays, the variables must be passed by reference (pass the address not the value)

}

////////////////////////////////
// recursive functions
///////////////////////////////

// functions that call itself

// statements below the recursive call are executed after all recursive calls -- while executing, it executes with the latest value of 'i', second latest value of 'i' and so on. -- follows STACK scheme (Last In First Out)


recursivefunction(int i)
{

if(i<5)
{
printf("the value of i before the recursive all %d\n", i);

i++;

printf("the value of i after increment %d\n", i);

recursivefunction(i);  // statements below will be executed after all recursive calls are done.

printf("i am below the recursive call, the value of i %d \n", i);
i++;
printf("i am below the recursive call, the value of i after increment %d \n", i);
}

// since the variable 'i' is local, the printf below recursive call prints 3,4,5.  if it is global, only the final value is taken and hence, the printf prints 5,5,5
}



}
