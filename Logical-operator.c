#include<stdio.h>
#include<unistd.h>
int
main ()
{

  /* Logical operator
     Associativity: Left to Right */

  int x = 12;
  int y = 14;
  int z = 15;

  // Logical AND operator:&&

  int r1 = x < y && x < z;
  printf ("the value of r1 is: %d\n", r1);

  // Logical OR operator: ||

  int r2 = x > y || x < y;
  printf ("The value of r2 is: %d\n", r2);

  //Logical NOT operator: !

  int r3 = !x < y;
  printf ("The value of r2 is: %d\n", r3);

}
