#include<stdio.h>
void main()
{

// char arrays -- strings
// int a[] float b[]
// two-dimensional array ; k-dimensional array 
// 2D array - matrix

/*
	c1    c2    c3

r1     (student 1, course 1)

r2

r3

r4

a[i][j] - student i course j

b[2][10] - this 2d array may be stored as two 1d array of size 10 internally, for example,

a[0] to a[9]-  marks of student 1
a[10] to a[19] - marks of student 2


int a[4][3]  -- 4 rows 3 columns  int a[10] -- 10 rows 1 col

*/


// int a[5] - 1d array - marks of a single student
// int a[5][3] - 2d array - marks of 5 students in 3 subjects
// int a[5][3][4] - 3d array - marks of 5 students in 3 subjects and each subject has 4 examinations
// int a[5][3][4][4] - 4d array - marks of 5 students in 3 subjects and each subject has 4 examinations and each examination has 4 sections
// in general, one can define k-d array depending upon the application requirement.

int a[5][3];

for (int i=0; i<5; i=i+1)
{
	for(int j=0; j <3 ; j++)
	{
	  printf("enter the marks of student %d in course %d", i+1,j+1);
	  
    scanf("%d",&a[i][j]);

	  printf("marks of student %d in course %d is %d", i+1,j+1,a[i][j]);

	 }   


}

// for a k-d array, we need k for loops for initialization and printing.  All arithmetic that can be done on data members (int/float/char) can be done array elements.
// since arrays are passed by reference, any arithmetic done on 'called function' will also be reflected in the 'calling function'.



///////////////////////////
// structures
//////////////////////////

// arrays - sequence of data of similar data type - array of int, array of char
// structures - a collection of disimilar data types

struct student_record
{
char rollno[8];
char name[10];
int age;
float cgpa;

};

// structure intialization

struct student_record abc ={"coe1408","turing",37,9.9}; // assignment
//abc.rollno[8]="coe1408";
//abc.rollno="coe1408";
//abc.name[10]={'t','u','r','i','n','g','\0'};
//abc.age=37;
//abc.cgpa=9.9;

char roll[5]="abc";
printf("\n %s \n",roll);

printf("Details of a student are rollno=%s  name=%s  age=%d  cgpa=%f \n", abc.rollno, abc.name, abc.age, abc.cgpa);


}
