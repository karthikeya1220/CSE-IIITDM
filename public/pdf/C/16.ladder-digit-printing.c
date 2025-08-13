#include<stdio.h>

void main()
{
// Ladder 1
/*

1
12
123
1234
12345

*/
for(int i=1; i<=5; i++)
{ for(int j=1; j<=5; ++j)
  {  
     if( j <= i)
     printf("%d",j);
   }
  printf("\n");

}

printf("\n\n\n");

// Ladder 2

/*

12345
2345
345
45
5

*/


for(int i=1; i<=5; i++)
{ for(int j=1; j<=5; ++j)
  {  
     if( j >= i)
     printf("%d",j);

   }
  printf("\n");

}

printf("\n\n\n");

// Ladder 3

/*
12345
 2345
  345
   45
    5
*/

for(int i=1; i<=5; i++)
{ for(int j=1; j<=5; ++j)
  {  
     if( j >= i)
     printf("%d",j);
     else printf(" ");
   }
  printf("\n");

}

printf("\n\n\n");

// Ladder 4

/*
   1
   21
  321
 4321
54321


*/

for(int i=1; i<=5; i++)
{ for(int j=5; j>=1; --j)
  {  
     if( j <= i)
     printf("%d",j);
     else printf(" ");  
 }
  
 printf("\n");
}

printf("\n\n\n");


// Ladder 5

/*

12345
1234
123
12
1


*/
for(int i=1; i<=5; i++)
{ for(int j=1; j<=5-i+1; j++)
  {  
          printf("%d",j);
     
 }
  
 printf("\n");
}

printf("\n\n\n");


}
