//Find the addition of two number using user define function
//Ther are diffrent four method ,
//2. With argument no return 

#include<stdio.h>
void add (int, int);
int main(){
    int a, b;
    printf("Enter the two number:");
    scanf("%d%d",&a,&b);
    add(a,b);
    return 0;
}
void add (int a , int b){
    int sum;
    sum = a+b;
    printf("Addition of two number = %d",sum);
}
    