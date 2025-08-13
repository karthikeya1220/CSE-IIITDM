#include<stdio.h>

void main()
{

//////////////////////
// sort using find min
//////////////////////
int a[10];

for(int i=0; i<=9; i=i+1)
{

  printf("enter the value of a[%d]",i);
  scanf("%d",&a[i]);
}


int min, index;

 for(int k=0; k<=9; k=k+1)

 {

    min=a[k], index=k;  

 // if min is not updated in the next loop, then index is 'k'.  if index is not set to k here, we will get junk value while swapping.

 	for(int l=k+1; l<=9; l=l+1)
  	{	

   	if ( min > a[l])
   	{  min=a[l];
      	   index=l;

   	}



	}

// swap a[index], a[k]
int c=a[k], d=a[index];

c=c+d;
d=c-d;
c=c-d;

a[k]=c, a[index]=d;


 }

printf("\nSORTED ARRAY\n");

for(int i=0; i<=9; i=i+1)
{

  printf("a[%d]=%d \n",i,a[i]);

}

//////////////////////////////
// code optimization
/////////////////////////////
// for loop 'k': enough to run upto k<=8.  If first 9 elements are sorted, 10th min automatically goes into a[9].

// additional variable min,index can be avoided.  modified code is given below.



int b[10];

for(int i=0; i<=9; i=i+1)
{

  printf("enter the value of b[%d]",i);
  scanf("%d",&b[i]);
}


 for(int k=0; k<=8; k=k+1)

 {
 	for(int l=k+1; l<=9; l=l+1)
  	{	

   	if ( b[k] > b[l])
   	{  
  // swap
      int e=b[k], f=b[l];

        e=e+f;
        f=e-f;
        e=e-f;

     b[k]=e, b[l]=f;


   	}

	}
 }

printf("\nSORTED ARRAY\n");

for(int i=0; i<=9; i=i+1)
{

  printf("b[%d]=%d \n",i,b[i]);

}

// the invariant maintained by the above logic; whenever we find b[l] smaller than b[k], swap. b[k] gets minimum for the subarray b[k..l].

// one can also find MAX and push it to the end at each iteration.

// yet another logic


int c[10];

for(int i=0; i<=9; i=i+1)
{

  printf("enter the value of c[%d]",i);
  scanf("%d",&c[i]);
}


 for(int k=0; k<=8; k=k+1)

 {
 	for(int l=1; l<=9-k; l=l+1)
  	{	

   	if ( c[l-1] > c[l])
   	{  
  // swap
      int g=c[l-1], h=c[l];

        g=g+h;
        h=g-h;
        g=g-h;

     c[l-1]=g, c[l]=h;


   	}

	}
 }

printf("\nSORTED ARRAY\n");

for(int i=0; i<=9; i=i+1)
{

  printf("c[%d]=%d \n",i,c[i]);

}


}
