#include<stdio.h>
// INTRODUCTION TO CHARS AND STRINGS
// char and int data types are two sides of the same coin
// each character has an associated integer value (ASCII) - control strings %d (meant for int) and %c (meant for char) can be used interchangeably

void main()

{


////////////////////

// Char and Strings

////////////////////

char a,b,c,d;

a='a';  b='\r', c='\0', d='123' ;

printf("the value of char variable a: ASCII= %d,  char= %c \n" , a,a);

printf("the value of char variable b: ASCII= %d,  char= %c \n" , b,b);
printf("the value of char variable c: ASCII= %d,  char= %c \n" , c,c);
printf("the value of char variable d: ASCII= %d,  char= %c \n" , d,d);




// for d=123, d gets '3', the last char in the string.

printf("ASCII and char %d %c --- %d --- %c --- %d  %c \n", 17,17, 97, 97, 110,110);

a=65, b=128; // 65 and 128 are treated as ascii and the corresponding char is stored in 'a' and 'b'

printf("ASCII and char %d %c --- %d --- %c \n", a,a,b,b);


printf("enter a character");

scanf("%c",&a); // if we enter more than one character for 'a', then the first character is taken and the rest are ignored


printf("%c \n", 255);

printf("%c \n", 25555555); // wraps round  -- x= input no mod 256, prints char corr to ASCII(x)



char s2;

printf("enter any spl character \n");

scanf("%d", &s2);

printf("the entered char is %d  %c \n", s2, s2);

printf("the ascii value of new line is %d",'\n');

printf("the char corr to integer 10 is %c newline \n",10);  // instead of printing \n, the control is shifted to the next line before printing 'newline'

printf("the ascii value of back space is %d",'\b');

printf("the effect of%cback space \n",8);  // 'f' in 'of' is over written

printf("the ascii value of carriage return is %d \n", '\r');

printf("the effect  of %c carriage return \n", 13);  // 'carriage return' overwrites 'the effect of'

printf("the char corr to integer 28 is %c \n", 28);

printf("%c",9);  // \t


//////////////////

// selection sts with char

//////////////////

if(a==65) // any comparison is integer based, therefore, ascii(a) == 65

printf("IF - comparison with ascii \n");

else

printf("ELSE - comparison with ascii \n");


if(a=='A') // 65 == 65 

printf("IF - comparison with char \n");

else

printf("ELSE - comparison with char \n");

int x=98, y=66;

if(x=='b')

printf("IF - comparison bet ascii and int \n");

else

printf("ELSE - comparison bet ascii and int\n");


if(y=='B')

printf("IF - comparison bet ascii and int  \n");

else

printf("ELSE - comparison bet ascii and int  \n");

printf(" \n \n intro to switch \n \n");

////////////

// switch case
////////////

switch(x)

{

case 'b':  printf("switch case b \n");  break;  // this is same as case 98

//case 98:  printf("duplicate case label \n");  break;

case 66:  printf("switch case B"); break;

//case 'B': printf("duplicate case label \n");  break;

// case (1+2-4*7):
 
// case ('a'+1 * 'b' - 5):

}


 // what is the output of the following printf

printf("%d \n %c \n", '123', '123');

char w='3 4 5 ';
printf("\n %c %d \n", w,w);

if(w=='123')

printf("\n \ninside if");

else
printf("else");

//////////////

// loops

///////////////


for(char i=70; i<74; i++)  // i=i+1 - char addition/ascii addition

//for(char i='F'; i<74; i++) // same as above for

{

printf("the value of i in int=%d, char=%c \n", i,i);

}


//////////////

// strings - a sequence of chars - There is no data type 'string' a="abc"

///////////////

char p[]="abc"; // length of the string = number of chars + 1 ( null char '\0') , system automatically appends null char at the end

char q[]={'a','b','c','\0'}; //  char q[]={'a','b','c'};

char r[3]={'0','1','2'}; // system does not append null char as r[2] is already defined, if it is r[4] then null char is appended


char s[3]="abcdef";

printf("string p=%s, q=%s, r=%s, s=%s \n\n", p,q,r,s); // %s control string - to print strings

printf("string p :  %c %c %c %d \n", p[0],p[1],p[2],p[3]);

printf("string q :  %c %c %c %d \n", q[0],q[1],q[2],q[3]); // null character will not be printed, instead its ascii value can be printed using %d

printf("string s :  %c %c %c %c %c %c %d %d\n", s[0],s[1],s[2],s[3],s[4],s[5],s[6],s[7]);

printf("size of p = %d, q= %d, r= %d, s= %d \n \n", sizeof(p), sizeof(q),  sizeof(r), sizeof(s));


printf("input acceptance - strings - enter a string - termination char is white space \n");

scanf("%s %s %s %s",p,q,r,&s); // for strings, & operator is optional
//scanf("%s %s %s %s",p,&q,r,s);

printf("string p=%s, q=%s, r=%s, s=%s \n\n", p,q,r,s);  

printf("size of p = %d, q= %d, r= %d, s= %d \n \n", sizeof(p), sizeof(q),  sizeof(r), sizeof(s));

//%%%%%%%%%%%%%

// some insights into strings

//%%%%%%%%%%%%%
char t[]="a     b c\0";

printf("the value of t=%s ", t);

/* // check output

char u[]="abc" + "def";

char t[]="a\\t\tbc printf(%d,12) b12/3cd\be\t\t\0";  // a\tbc

printf("\n the value of t=%d, size of = %s, t[5]=%c, t[5]=%d %d %d ", sizeof(t), t,t[8],t[8], r[20], r[23]);

*/


//char v[]={'printf("\ncharstring\n")'};

//char v[]=""printf("\ncharstring\n")"";

//printf("\n %d %c \n",v[0],v[0]);

int n=5;
int m[]={printf("\n \n char \n \n")};
printf("\n \n %d \n \n ",m[0]);


int h[2]={1,1};

printf("\n \n %d %d \n ", h[3],h[4]);

//if ("abc"+"def"=="abc"+"def") // string comparison is not allowed in C, int == int char == char (ascii == ascii)

// to compare two strings; write a program/module to compare two char arrays - char by char 

char p1[]="abc", q1[]="abc";
//if ("abc"== "abc") // logical value '1' // string compare

//if (p1== "abc\0")

//if ("abc"== "bcd")

//if (p1[]== q1[]) // char array compare
printf("if- string cmp");

//else

printf("else - string cmp");



//////////////////////

// More on chars and strings

//////////////////////

{

char c='1';  // occupies 1 byte

char k[]="1"; // occupies 2 bytes (1 byte for '1' + 1 byte for null char)

char a[4]={'1',' ',48,'\0'};

// char a[];
// a[]={'1',' ',48,'\0'}; invalid
// char a[4];
// a[4]= {'1',' ',48,'\0'};  invalid as a[4] represents the fourth character.


// \0 - null character - will not be displayed at the console  conio.h - console input/output

char b[6]="abcde"; // b contains abcde\0, every string is suffixed with \0 if the length of the char array is one more than the length of the string

// size of (b)=6 bytes; 5 bytes for string + 1 byte for \0

//char b[10]="abcde";  // b[7] onwards; some char; sizeof(b)=10 bytes

//char b[2]="abcde";  // it reads the first 2 chars, no place for \0, size of (b)=2 bytes
//char b[0]="abcde";  // it stores nothing
//char b[1]="abcde";  // it stores just 'a'
//char b[4]="\0abc"; // it stores nothing as the first character is the null character -- null char is a terminating character, no further char will be read

//char b[4]="ab\0cde"; // stores ab



char e[]={};  // empty char array  e[0] may get junk



printf("%c%c%c%c%c",a[0],a[1],a[2],a[3],'s'); // \0 stored at a[3] will not be printed, however it is stored as integer 0 (ascii value)

printf("\n \n %d %d %d %d",a[0],a[1],a[2],a[3]); // ascii value

printf("\n \n %s here is a string", b);

printf("\n \n %c %c %c %c %c %c %c %c %c",b[0],b[1],b[2],b[3],b[4],b[5],b[6],b[7],b[8]);


printf("\n \n %d %d %d %d %d %d %d %d %d",b[0],b[1],b[2],b[3],b[4],b[5],b[6],b[7],b[8]);



printf("\n \n the size of char and string %d %d %d %d %d", sizeof(a),sizeof(c), sizeof(d),sizeof(b),sizeof(e));

printf("\n \n %d",e[0]);  //e[0] may print junk

char f[]="";

printf("\n \n %d %d", f[0], sizeof(f));  // empty string is storted in f[0] and the size is 1 byte

char g[3]="abcde"; // it accepts the first three 'abc', '\0' is not stored as the size of g is smaller than the length of the string

printf("\n %c %c %c %c %c %c %c", g[0],g[1],g[2],g[3],g[4],g[5],g[6]);

printf("\n %s",g);

printf("\n \n enter a string");

scanf("%s", a);  // accepts a sequence of chars until 'white space' is encountered  if the input is 'lab program' then lab gets stored in 'a'

printf("\n \n the entered string is %s \n",a);

char h[]={ }; // h[0] may print junk

printf("\n %d %c %d",h[0],h[0],sizeof(h)); // no space is reserved for h and hence it prints '0'

}

////////////////////////

// Octal and Hexa system
///////////////////////


//printf("the integer equivalent of no that begin with 0's -- it captures octal equivalent \n");
// for hexa, the number begins with 0x or 0X

printf("the value of 00 is %d \n", 00);
printf("the value of 001 is %d \n", 001);
printf("the value of 0010 is %d \n", 0010);
printf("the value of 00100 is %d \n", 00100);
printf("the value of 002 is %d \n", 002);
printf("the value of 0020 is %d \n", 0020);
printf("the value of 00200 is %d \n", 00200);

// all of the above are octal numbers

printf("the hexa %d\n",0X99);
printf("%c  %d  %d \n", 010,010,123);
printf("%c %c %c %c\n", '0','00','001','31');
printf("%d %d %d %d %d\n", '0','00','10','001','31');

printf("octal=%o hexa=%0x for the decimal number=%d",12,12,12);


}
