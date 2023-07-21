/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char name [40], gender;
    int age,id;
    printf("Enter name:");
    scanf("%[^\n]%*c",name);
    printf("%s",name);
    
    printf("\nEnter id:");
    scanf("%d",&id);
    printf("%d",id);
    
    while ((getchar()) != '\n'); //clear input buffer
    
    printf("\nEnter gender: 'M' or 'F':");
    scanf("%c",&gender);
    printf("%c",gender);
    
    printf("\nEnter age:");
    scanf("%d",&age);
    printf("%d",age);
    
    return 0;
}
