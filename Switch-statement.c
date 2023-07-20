#include<stdio.h>
#include<unistd.h>
int main(){
    //switch statement
    //0: very poor
    //1: poor
    //2: good
    //3: very good
    //4&5: excellent
    int rating;
    puts("How likely you would like to rate our pizza on a scale of five?");
    puts("Reply with a number fom 0 to 5 , where 0 is least likly and 5 is most likly.");
    scanf("%d",&rating);
    
    switch (rating){
        case 0:
        puts("You had very poor exprience. we will call you shortly to know what went wrong.");
        break;
        case 1:
        puts("You had poor expience. we will call you shortly to know that went wrong.");
        break;
        case 2:
        puts("Thank you for your feedback. we will call you to know that went wrong.");
        break;
        case 3:
        puts("Thank you for you feedback. we're constantly working to improve pizza qualoity.");
        break;
        case 4:
        puts("Yay! Thank You for your feefdback.We would love to serve again.");
        break;
        case 5:
        puts("Yay! thank you for your feedback.We would love to serve again.");
        break;
        default:
        puts("invalid input");
        
    }
    return 0;
}