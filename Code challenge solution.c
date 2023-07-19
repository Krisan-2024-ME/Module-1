#include<stdio.h>
#include<unistd.h>
int main(){
    //code challenge in C.by Internshala
    
    int marks;
    printf("Enter the marks: ");
    scanf("%d",&marks);
    int gread;
    
    if (marks>=450 && marks<=500){
        gread = 'A';
    }
    else if (marks>=400 && marks<450){
        gread = 'B';
    }
    else if (marks>=350 && marks<400){
        gread = 'C';
    }
    else if (marks>=250 && marks<350){
        gread = 'D';
    }
    else if (marks>=150 && marks<250){
        gread = 'E';
    }
    else if (marks>=0 && marks<150){
        gread = 'F';
    }
    else{
        puts("invalid input");
    }
    
    
    printf("Your gread is:%c\n",gread);
    
    return 0;
    
}