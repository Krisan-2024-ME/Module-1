/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<unistd.h>
int main(){

	/*relational operator
	  A condition in c return either 0 or 1
	  0 represent false value
	  1 represent true value
	 */
	int x = 12;
	int y = 14;
	int z = 15;

	int r1 = x>y; // false: r1 = 0
	int r2 = x<y; // true: r2 = 1
	int r3 = x>=z; // false: r1 = 0
	int r4 = x<=y; // true: r2 = 1
	int r5 = x==z; // false: r1 = 0
	int r6 = x!=y; // false: r1 = 1

	printf("The value of r1 is: %d\n",r1);
	printf("The value of r2 is: %d\n",r2);
	printf("The value of r3 is: %d\n",r3);
	printf("The value of r4 is: %d\n",r4);
	printf("The value of r5 is: %d\n",r5);
	printf("The value of r6 is: %d\n",r6);

	return 0;

}
