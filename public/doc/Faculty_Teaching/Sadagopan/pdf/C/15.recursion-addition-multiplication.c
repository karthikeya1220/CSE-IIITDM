#include<stdio.h>

// logic 1
recursive_addition1(int a, int b)
{
  if (b==0) return a;
  if (b>0) return 1 + recursive_addition1(a,b-1);
  if (b <0) return -1 + recursive_addition1(a,b+1);


}


// logic 2

recursive_addition2(int a, int b)
{
  if (b==0) return a;
  if (b>0) return recursive_addition2(a+1,b-1);
  if (b <0) return recursive_addition2(a-1,b+1);


}

// recursive multiplication

recursive_multiplication(int a, int b)
{
  if (b==0) return 0;
  if (b > 0) return a+recursive_multiplication(a,b-1);
  if (b < 0) return -a+recursive_multiplication(a,b+1);


}




void main()
{
int result_add1=recursive_addition1(5,2);

int result_add2=recursive_addition2(-5,-2);

int result_mul=recursive_multiplication(3,-9);

printf("Recursive addition1=%d  addition2=%d \n", result_add1, result_add2);
printf("Recursive multiplication=%d\n",result_mul);



}
