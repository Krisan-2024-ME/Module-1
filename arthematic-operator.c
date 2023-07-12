#include<stdio.h>
#include<unistd.h>
int main (){
	int x=12,y=6,sum,sub,mul,div,mod;
	sum=x+y;
	sub=x-y;
	mul=x*y;
	div=x/y;
	mod=x%y;
	printf("Sum of x and y = %d\n",sum);
	printf("Diffrence between x and y = %d\n",sub);
	printf("Multiply of x and y = %d\n",mul);
	printf("Division of x and y = %d\n",div);
	printf("Remainder when x is divided y =%d\n",mod);
	return 0;
}
