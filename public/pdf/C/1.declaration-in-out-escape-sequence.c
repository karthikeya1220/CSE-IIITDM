#include<stdio.h>

// Objective: We shall discuss variable declaration, input and output statements.  Basic arithmetic and formatted input and output will also be discussed in detail.

// To interface with peripherals such as keyboard and monitor, we use 'scanf' and 'printf' which are included in 'stdio.h'

// #include<stdio.h> -- includes the definition for printf and scanf so that on execution, the program can interact with user through keyboard and monitor

// usage of printf and scanf without including stdio.h will throw a warning and an error during execution (run-time)

// Even if compiler throws a warning message, a.out will be created on compilation and on executing a.out, we will notice an error.

// On error,  a.out will NOT be created instead the compiler executes the previous a.out if exists

/*  Statements prefixed double backslash (//) or given inside /*   */   //,  will be treated as comments and will not be executed by the compiler.  Comments are given to increase the readability of the program.   */

void main()
{  

// Declaration begins
// Syntax:  data type followed by variable name (identifier);  commonly used data types are int (to represent integers), float (to represent real numbers), char (to represent characters) 

// intro to int and float

	float a,b,c;  // declares float variables ; float: keyword  a,b,c:identifier 
	int n,o,p;   // declares three integer variables; n,o,p
	int number1, number2, result, number_data;  // a variable name can include digits, some (not all) special characters
	int _number, $num;  // can begin with spl char $ and _  
	// int @abc, !number1;  - error can not begin with these spl characters
	int a1, $1a;  //can begin with special character $, no other special character is allowed
	int a$b;  // No other special character is allowed
	int INT, Int;  // c language is case sensitive and hence this is valid. The first 'int' denotes the data type and the other two are names of the variables
	int ;;  // empty declaration
	int abcdefghij;  //length of the identifer is at most 31 characters
// int num-data;  // this will throw error as 'hypen' is treated as 'minus'
// int 1b;  // can not begin with a digit
// int float r;  // multiple data type declaration
// int int x; // multiple data type declaration



// Assignment
// The variables that are declared can be assigned values through assignment statements.  Assignment can also be done along with declaration.

int variable1, variable2;
variable1=45;
variable2=55;
variable1=40, variable2=50;

	int d=5;
	int e,f=e=3;  //same as int e=3, followed by f=e
	int g=4.51;  // g gets the integer part which is '4'

// int e=f=3;  // error as 'f' is not declared
// int g=int h=3; // error

float f1,f2;
f1=1.234, f2=4 ;
float f3=1.31401;


// declaration ends -- In a good programming practice, all variables that are used as part of the program must be declared first before its first use in some other part of the program.  However, modern compilers permit variable declaration in any part of the program.  

/*
Basic Arithmetic, Input Acceptance and Displaying of Result

*/

int num1,num2,num3,sum;
num1=3, num2=4, num3=4;
sum=num1+num2+num3;   // the result of adding three integers is stored in result.

/*
How do we see the value of 'result' variable
How do assign values to input variables (num1,num2,num3) during run time
*/

// INTRODUCTION TO printf() and scanf()
// printf() - to display a string of characters, a value of an integer/float on the monitor(console)
// scanf() - accept inputs such as integers/float from the user through keyboard.

// the following code accepts two integers and two float numbers from the user.

	printf("enter two integers separated by white space or newline \n");   

// the character \n at the end is a newline character which will the cursor to the next line after displaying the message

	scanf("%d%d",&num1,&num2); 

// %d is a control string for accepting integers; the value read from the user is stored in the memory location assigned to the variable num1.  To redirect the input value to the address of num1, the address operator & is used.

float fnum1,fnum2,fresult;

	printf("enter two real numbers separated by white space or newline \n"); 
	scanf("%f%f",&fnum1,&fnum2);

//adding two integers 

sum=num1+num2;  // performs addition
printf("the addition of two numbers; num1=%d num2=%d is %d+%d=%d",num1,num2,num1,num2,sum); 

// to display the result; control string and the corresponding variable must be used.  In the above statement, there are five %d and each one corresponds to a variable given after the quotes.  the first two corresponds to the value of num1 and num2, and so on.

// adding two float numbers

fresult=fnum1+fnum2;
printf("the result of adding float number 1=%f, float number 2=%f is %f", fnum1,fnum2,fresult);

//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//        Playing with printf and scanf
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

int num_of_characters=printf("counting the number of characters in a string\n"); 
printf("%d",num_of_characters); // there are 45+1=46 characters in the above string; \n at the end is counted as one character.

int number_of_char=printf("\nthe result of adding float number 1=%f, float number 2=%f is %f\n", fnum1,fnum2,fresult);

// if the inputs for the above statement are 1.23 123.45 then the output is
// the result of adding float number 1=1.230000, float number 2=123.449997 is 124.680000
// the above statement has 87 characters and hence the value of number_of_char=87

printf("%d", number_of_char);

// NOTE: the return type of printf is int and returns the number of characters given within quotes

printf("%d %d",printf("printf inside printf"), printf("nice"));  
//the output is; 
// niceprintf inside printf20 4
// the computation in printf is done from right to left; the system prints 'nice' followed by 'printf inside printf', and then displays the length of 'printf inside printf' (the value of the first %d from left) and the length of 'nice' (value of second %d from left)

printf("%d",printf("C")+printf("C++"));

// the above printf outputs 4 which is 1 + 3 ; 1: the length of 'C',  3: the length of C++


int number_of_inputs=scanf("%d%d",&num1,&num2);
printf("\n%d\n",number_of_inputs);

// similar to printf, the return type of scanf is int and it returns the number of inputs accepted from the user by that scanf.

printf("%d",scanf("%d",&num1)+scanf("%d",&num2));  // if we enter 10 20 for scanf, the output of printf is 2

printf("%d %d", num1,num2); // the value of num1=10, num2=20

// make a note of the order of execution of the following statement.

printf("%d %d %d %d %d",num1,num2,scanf("%d",&num1)+scanf("%d",&num2),num1,num2);  // If we input 345 55 for the scanf statement, then

// Since order of execution for printf is right to left, the output is 345 55 2 10 20.  for the rightmost num1, num2, the previous value of num1=10, num2=20 is taken, followed by scanf, finally printing the new value of num1=345, num2=55

printf("the \"value\" of \"a=%f\" and \"b=%f\" \n",a,b);  // while printing, the substring value will be printed with in double quotes


// %%%%%%%%%%%%%%%%%%%%%%%%%

// More about Control Strings

//%%%%%%%%%%%%%%%%%%%%%%%%%%

float real1,real2;
int integer1,integer2;  

// on declaration; the following tasks take place (i) creation of a memory location for the variable (ii) assignment of junk value (some initial value) to that variable 
// when actual value is passed through assignment or scanf, junk value is replaced with the actual value.

printf("the junk value of integer1=%d integer2=%d real1=%f real2=%f", integer1, integer2, real1,real2); // prints junk value; some compiler prints '0' for integer and 0.000000 for float

scanf("%d%d",&integer1,&integer2); // junk value is replaced with what is key-in by the user

integer1=integer1+integer2; // addition is performed first and then assignment takes place; assignment is always from right to left

// What if, we print integer using %f and float using %d, we get a warning on compilation

// WARNING - ERRONEOUS output -- mismatch between "data type" and "control string", some junk value is printed.

// the following will result in warning.  Some junk integer value is printed for real1 and junk float value for integer1, due to mismatch in control string (%d is given for float variable)

printf("%d %f", real1, integer1); 


// Although, the above statement prints junk value for 'integer1', the contents of memory that store 'integer1' is unchanged.  This can be verified as follows

	printf("the value of the integer1 after the above erroneous statement  is %d \n",integer1);
 

//adding two float numbers and store the result in an integer.  Similarly, integer addition.

integer1=real1+real2; // integer part of float addition after rounding is assigned to integer1

printf("%d", integer1);

//adding two integer numbers and store the result in float

real1=integer1+integer2; // compiler appends six zeros and displays the result; that is, if integer1=10, integer2=20, then real1=30.000000

printf("%f",real1);

// what happens if we give real value for an integer during run time

// suppose, while entering the input for integer1 and integer2 as part of scanf, if we enter 14.5 for integer1, then 'integer1' will be assigned '14' and compiler abruptly terminates without assigning/asking any input for 'integer2'
// if we enter special characters such as '@', '$', then abrupt termination
// if '2' and '@' entered, then 'integer1' gets '2' and 'integer2' gets nothing
// if '@' and '2' entered, then abrupt termination

//%%%%%%%%%%%%%%%%%%%%%%%%%%%
// formatted input and output
//%%%%%%%%%%%%%%%%%%%%%%%%%%%

printf("*** formatted input  ******\n");

printf("enter the value for \'integer1\' and \'integer2\' \n");
scanf("%3d %2d",&integer1,&integer2);

// %3d - means, the compiler expects an integer value of size 3 for integer1

// if input entered is 123456 78, then integer1 gets 123 and integer2 gets 45 and the other values are ignored.

// behaviour of %d and %0d are same

scanf("%3d \t %d", &integer1,&integer2); // while entering, between two integers, press tab key; \t - character (escape sequence) for introducing tab space

int date, month, year;

printf("enter the date in dd/mm/yy\n");
scanf("%d/%d/%d",&date,&month,&year);  // sample input: 15/8/1947

printf("entered date %d/%d/%d \n", date,month,year);  // entered date 15/8/1947

printf("enter the date in dd-mm-yy\n"); 
scanf("%d-%d-%d",&date,&month,&year); // sample input: 26-1-1950 
printf("entered date %d-%d-%d \n", date,month,year); // entered date 26-1-1950

printf("float with precision-enter two float numbers");
scanf("%2f %3f",&real1,&real2);  // format is allowed only on integer part; some junk value is printed if we include %2.1f %3.6f
printf("%f%f",real1,real2);


printf("***** formatted output 1 ******\n");

real1=123.897;

printf("the value of real1 with format \'18.7\' %18.7f \n",real1);

//18.7 - at least 18 places which includes 7 places for fractions and 1 place for dot
// for the above input 3 places for decimal part, 1 place for dot, 7 places for fraction and the remaining 7 places will be filled with white spaces.  When the number is printed it is pre-fixed with 7 white spaces

printf("the value of real1 with format \'2.5\' %2.5f \n", real1); // at least 2 places in the output which includes 1 for dot and 5 for fraction

//2.5 appends junk digit for 4th and 5th digits

printf("the value of real1 with format \'2.1\' %2.1f \n",real1);   //2.1 - rounded at 1st digit

printf("the value of \\ real1 \\ with format \'2.0\' %2.0f \n",real1);  //2.0 discard fraction
 

integer1=897;
// %7d - at least 7 digits in the output //0d - at least 0 digits in the output
printf("the value of integer1 with format \'7d\' %7d \n",integer1); // prefix 4 white spaces followed by 897
printf("the value of integer1 with format \'2d\' %2d \n",integer1); // prints 897
printf("the value of integer1 with format \'0d\' %0d \n",integer1); // prints 897



printf("*** formatted output 2 ******\n");
printf("display 12 in 6-bit repn prefixed with white spaces %6d \n", 12);
printf("display 12 in 6-bit repn suffixed with (left justified) white spaces %-6d ", 12);
printf("display 12 in 6-bit repn prefixed with 0's %06d \n", 12);
printf("display +12 with sign %+0d \n", 12);
printf("display -12 with sign -%2d \n", 12); // note: the position of minus symbol
printf("display -12 with sign %--2d \n", 12); // -- is treated as - and hence the output is left justified
printf("display 12 with r digits %rd \n",12); // prints 12, a variable length can not be given using %rd
printf("display 12 with a space at the beginning %    d \n", 12);
printf("display +12 with sign %+06d \n", 12); // pad zeros
printf("display 12 %-06d \n", 12); //left justified
	
//%%%%%%%%%%%%%%%%%%%%%%%
// %n control string to count the number of characters
//%%%%%%%%%%%%%%%%%%%%%%%


int num_char_printed,y,z1,z2, r=10;


printf("the number%n of characters is\n%n %d", &y,&z1,y);  // displays the message 'the number of characters is', the first %n counts the length of 'the number', and the entire length is counted by the second %n which includes the character '\n'.  The value of the first %n is redirected to the variable 'y' and the second one to 'z1'.  Since printf is executed from right to left, some junk value is printed for 'y'.  To get the actual value of y and z1,

printf("%d %d\n",y,z1);

printf("programming\n%n",&z2);
printf("%d\n",z2);
// the above one is same as 
num_char_printed=printf("programming\n");
printf("%d \n\n",num_char_printed);

printf("value%n of integer1=%d%n",&y,1234,&z1);
printf("%d %d\n",y,z1);

//%%%%%%%%%%%%%%%%%%
// the number of bytes occupied data types
//%%%%%%%%%%%%%%%%%%
printf("the size of int %d \n", sizeof(int));
printf("the size of long int %d \n", sizeof(long int));
printf("the size of float %d \n", sizeof(float));
printf("the size of double %d \n", sizeof(double));
printf("the size of int %d \n", sizeof(integer1));
printf("the size of float %d \n", sizeof(real1));

//%%%%%%%%%%%%%%%%%%%%%%
// other escape sequences \t \r \b 
//%%%%%%%%%%%%%%%%%%%%%%


printf("123456789\n");
printf("\tintroduction to tab\n\n"); // \t - offers one tab space (equivalent to 8 white spaces)
printf("1234567890123456\n");
printf("\t\tAfter two tab\n\n");
printf("12345678901234567890123456789012345678901234567890\n");
printf("abc\tdef\tghi\n"); // intermediate tab offers '5' white spaces  ; intermediate tab behaves arbitrarily and hence the number of white spaces is not known 
printf("\t\tc-programming\t"); // the last tab offers '3' white spaces

printf("******introduction to back space******\n\n");
printf("computational engineering\b");  // \b - backspace - moves the cursor one cell left after printing 'computational engineering'.  the cursor is at 'g'
printf("theory and practice \n\n\n"); // the first letter 't' overwrites the last letter 'g' of the previous string

printf("computational engineering \b\b");  // moves two characters left from the current place which means the cursor will be at 'g' - space followed by the letter 'g'
printf("theory and practice \n\n\n");

printf("about the escape sequence slash 'r'\n\n");

printf("theory\r");  // \r - move the cursor to the front 
printf("lab\n\n\n");  // overwrites 'the' in theory with 'lab'

printf("theory \r");  // \r - move the cursor to the front 
printf("laboratory\n\n");  // overwrites 'theory' with 'laborat'

printf("12345678901234567890123456789012345678901234567890\n");

printf("welcome to c\ttheory and practice \t\n");  // middle \t offers 4 spaces and the last \t offers 3 spaces

printf("welcome to c \ttheory and practice \r");
printf("overwrite\n\n");

////

printf("welcome to c \t theory and practice \r "); // there is a space after 'r' which overwrites 'w' and 'overwrite' is written on 'elcome to'
printf("overwrite\n\n\n");

////
printf("welcome to c \ttheory and practice\r\t"); // after printing it moves the cursor to the front and due to \t it shifts the cursor after 8 places ; note that the usage of \t depends on the context.  If used inside the string, then it introduces white spaces depending on the position.  If used along with \r then it shifts the control but does not introduce white spaces.

// After shifting the control to the 8th place, the cursor is at the beginning of 'to' and since the middle \t offers 4 white spaces, it overwrites 'to c     t' 
printf("overwrite\n");   //


printf("theory1\r\t");  // \r - move the cursor to the front and shift the cursor after 8 places
printf("lab \n");

printf("something \r");
printf("practice\n");

printf("\b\btheory3 \r\b\b"); // \b has no effect 
printf("abc \n");
printf("*****************************\n\n");
printf("12345678901234567890\n");
printf("the effect\tof escape sequences\r\n\b");
printf("abcdefg\n\n");
printf("the effect\tof escape sequences\b\r");
printf("abcdefg\n\n");

// NOTE
/*
1. \t \r - tab space + shift control to the front
2. \r \t - shift control to the front + shift again the control by 8 places without introducing white spaces
3. \r \b - 'b' has no effect; it is same as \r
4. \r \n - control to the next line ; \r has no effect
5. \r \n \b - new line
6. \r \b \n - newline
7. \b \r - same as \r

*/



//%%%%%%%%%%%%%%%%

// to compile this program, use the following command
// gcc name of the c file with extension
// to execute the file type ./a.out


// RECAP; in this practice session, we have introduced declaration statements, assignments, basic arithmetic, input acceptance and output display.  Various control strings and escape sequenes were also introduced.

}
