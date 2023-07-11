#include<stdio.h>
#include<unistd.h>
int main(){
    printf("**********************\n");
    printf("---------WELCOME--------\n\n");
    printf("***********************\n");
    
    const float PI = 3.14;
    float radius;
    float area;
    printf("Enter the radius of the circle in centimetres:\n");
    scanf("%f",&radius);
    printf("calculating radius......\n");
    usleep(500000);
    area = PI*radius*radius;
    printf("The area of circle radius:%.2f sq. cm.\n\n\n",area);
    usleep(500000);
    printf("**********************\n");
    printf("---------WELCOME--------\n\n");
    printf("***********************\n");
    return 0;
    
    
}
