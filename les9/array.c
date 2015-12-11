#include <stdio.h>
/*******************************************
the relationship between pointers and arrays
********************************************
gdb: x/10d 0xbffff6a08 :Starting from this address,
               display 10 digits in decimal digits.
*******************************************/
int main()
{
    int a = 3;
    int b = 4;
    int array[3];
    array[0] = 1;
    array[1] = 10;
    array[2] = 100;
    int *p = &a;
    int i;
    for(i = 0; i < 7; i++){
        printf("*p = %d\n", *p);
        p++;
    }
    printf("----------------------------------\n");
    p = &a;
    for(i = 0; i < 7; i++){
    	printf("*p[%d] = %d\n", i, p[i]);
    }
    return 0;
}
