//conditional statement
#include<stdio.h>
#include<unistd.h>
int main(){
	//If-else statement
	float retailprice;
	puts("Enter the retailprice");
	scanf("%f" ,&retailprice);
	float payableAmount;
	if (retailprice>=500){
	puts("Eligible for discount");
	payableAmount=retailprice * 0.9;
	}
	else{
		puts("Not eligible for discount");
		payableAmount=retailprice;
	}
    printf("Discount availed: RS %.2f\n" ,retailprice-payableAmount);
    printf("Net payableAmount: RS %.2f\n",payableAmount);
    
    
    return 0;




}
