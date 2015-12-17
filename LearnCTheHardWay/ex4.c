#include <stdio.h>
/* Warning: This program is wrong on purpose. */
/* I've failed to initialize the height variable.
   I've for got to give the first printf the age variable. */
/* Building and running it with Valgrind: valgrind ./ex4 
   vaglrind --track-origins=yes ./ex4 */
int main()
{
    int age = 18;
    int height;
    printf("I am %d years old.\n");
    printf("I am %d inches tall.\n", height);

    return 0;
}
