#include<stdio.h>
#include<unistd.h>
int main(){
    //type conversion
    
    
    //1.Implicit type conversion (Automatic type conversion)
    int radius= 300;
    double newRadius = radius;
    printf("%lf\n",newRadius);
    
    //2.Explicit Type conversion
    
    double diameter= 4.67;
    int newDiameter = (int) diameter;
    printf("%d",newDiameter);
    return 0;
}