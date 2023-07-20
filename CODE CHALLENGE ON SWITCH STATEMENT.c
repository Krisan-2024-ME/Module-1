#include<stdio.h>
#include<unistd.h>
int main(){
    //code challenge in C.by Internshala,Topic switch statement
   /** A: Excellent! Keep it up.
B: Very good! Keep it up.
C: Good! Try improving in the next exam.
D: Average! Need to work hard.
E: Poor! Need a lot of hard work.
F: Failed! You need to attend special classes after school.**/
  char grade;
  puts("Enter the grade:");
  scanf("%c",&grade);
  switch(grade){
       case 'A':
       puts(" Excellent! Keep it up");
       break;
       
       case 'B':
       puts(" Very good! Keep it up.");
       break;
       
       case 'C':
       puts(" Good! Try improving in the next exam.");
       break;
      
       
       case 'E':
       puts(" Poor! Need a lot of hard work.");
       break;
       
       case 'F':
       puts(" Failed! You need to attend special classes after school.");
       break;
       
       default:
       puts ("Invalid input");
  }
  return 0;
}
    
    