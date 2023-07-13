#include<stdio.h>
#include<unistd.h>
int main(){
    
    //Assignment operator
    //Associativity: Right to Left
    
    //Example 1
    
    float bill = 200.00;
    float tax = 100.00;
    bill += tax;
    printf ("The final bill are:%.2f\n" , bill);
    
    //Example 2 
    
    bill -= tax;
    printf("The final bill are:%.2f\n" , bill);
    
    //Example 2 
    
    bill *= tax;
    printf("The final bill are:%.2f\n" , bill);
    
     //Example 2
     
     bill /= tax;
     printf("The final bill are:%.2f\n" , bill);
     
     
    
    return 0;
    
}