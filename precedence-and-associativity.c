/*
 ============================================================================
 Name        : precedence-and-associativity.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
#include<unistd.h>
int main(){
	//arithmatic operator: +,-,*,/ and %
	//precedence: {*,/,%}>{+,-}
	//associativity: Left to right
	int result= 5+5-2*7%2/2;
	// => 3 + 1 - 35 % 3 / 2
	// => 3 + 1 - 2 / 2
	// => 3 + 1 - 1
	// => 4 - 1
	// => 3
	printf("%d",result);
}
