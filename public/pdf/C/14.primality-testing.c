#include<stdio.h>

void main()
{

///////////////
// Primality
///////////////

/*

int x, flag=0;
printf("enter a number to check its primality\n");
scanf("%d",&x);
if(x <= 0)
 printf("invalid input");
else if (x==1)
 printf(" 1 is neither prime nor composite");
else if (x==2)
 printf("only even prime is 2");
else
{
 for(int i=2; i <= x-1;i=i+1)
 { 
  if(x % i == 0)
  {
    printf("%d is not prime, has a non-trivial factor %d",x,i);
    flag=1;
    break;
  }

 }
  if(flag==0)
  printf("prime: it has only trivial factors %d , %d",1,x);
}

*/

//////////////////////
// primality with display of factors
/////////////////////

/*
int x, flag=0;
printf("enter a number to check its primality\n");
scanf("%d",&x);
if(x <= 0)
 printf("invalid input");
else if (x==1)
 printf(" 1 is neither prime nor composite");
else if (x==2)
 printf("only even prime is 2");
else
{
 for(int i=2; i <= x-1;i=i+1)
 { 
  if(x % i == 0)
  {
    printf("%d is not prime, has a non-trivial factor %d \n",x,i);
    flag=1;
//    break;
  }

 }
  if(flag==0)
  printf("prime: it has only trivial factors %d , %d",1,x);
}


*/



//////////////////////
// primality with display of prime factors
/////////////////////

int x, flag=0;
printf("enter a number to check its primality\n");
scanf("%d",&x);
if(x <= 0)
 printf("invalid input");
else if (x==1)
 printf(" 1 is neither prime nor composite");
else if (x==2)
 printf("only even prime is 2");
else
{
 for(int i=2; i <= x-1;i=i+1)
 { 
  if(x % i == 0)
   {
//    printf("%d is not prime, has a non-trivial factor %d \n",x,i);
    flag=1;
    int flag_prime=0;
//    break;
   for ( int j=2; j <=i-1; j=j+1) // this loop checks whether i is prime or not
     if (i % j ==0) flag_prime=1; 
   if(flag==1 && flag_prime==0)
      printf("%d is not prime, has a prime factor %d \n",x,i);

   }

 }
   if(flag==0)
   printf("prime: it has only trivial factors %d , %d",1,x);
}




}
