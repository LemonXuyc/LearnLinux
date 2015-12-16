#include <stdio.h>
//this headerfile tells the compiler that youre goingto use the "the
//standard Input/Output functions".One of those is printf.
int main()
{
    int age = 18;
    int height = 72;

    printf("I am %d years old.\n", age);
    printf("I am %d inches tall.\n", height);
//Escape codes are \n or \t that let you print a newline or tab. 
//Format sequences are the %d or %s that let you print a integer or a string.

    return 0;
}
