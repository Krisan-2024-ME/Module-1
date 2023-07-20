#include<stdio.h>
#include<unistd.h>
int main(){
    float bill;
    float totalBill;
    float tax;
   
    float netpayableAmount;
    
    puts("Enter the bill");
    scanf("%f",&bill);
    
    
    tax = bill*(5/100);
    totalBill= tax + bill;
    
    if(totalBill>=1000){
    netpayableAmount = totalBill*0.9;
    printf("Total payableAmount after discount:Rs %.1f\n",netpayableAmount);
    
    }else{
    netpayableAmount = totalBill;
    printf("Total Payable Amount:%.1f\n",totalBill);
    }
    return 0;
}

