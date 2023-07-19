#include<stdio.h>
#include<unistd.h>
int main(){
    //Else-If Ladder statement
         // Greater than equal to 100 and less than 500: 5% discount
		// Greater than equal to 500 and less than 750: 10% discount
		// Greater than equal to 750 and less than 1000: 15% discount
		// Greater than equal to 1000: 20% discount
		// Less than 100: No discount
		float retailprice;
		printf("Enter the retail price: ");
		scanf("%f",&retailprice);
		float payableAmount;
		
		if (retailprice>=100 &&retailprice<500){
		    payableAmount= retailprice*0.95;
		    puts("Eligible for Discount");
		}
		else if (retailprice>=500 && retailprice<750){
		    payableAmount= retailprice*0.9;
		    puts("Eligible for Discount");
		}
		else if (retailprice>=750 && retailprice<1000){
		    payableAmount= retailprice*0.85;
		    puts("Eligible for Discount");
		}
		else if (retailprice>=1000) {
		    payableAmount= retailprice*0.8;
		    puts("Eligible for Discount");
		}
		else{
		    payableAmount = retailprice;
		}
		printf("Discount Availed: Rs %.2f\n",retailprice-payableAmount);
		printf("Net payable Amout: Rs %.2f\n",payableAmount);
		
		return 0;
		

}