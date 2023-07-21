#include<stdio.h>
#include<unistd.h>
int main(){
    //Escape sequences or Escap character
    
    //new line : \new
    
    puts("This is first statement.\nThis is second statement.");
    
    //Horizontal tab : \t
    
    puts("Before tab.\tAfter tab.");
    
    //single Quote: \'
    
    char x = '\'';
    printf("%c\n",x);
    
    //double Quote: "\""
    
    puts("\"This statement is withan double Quote\"");
    return 0;
}