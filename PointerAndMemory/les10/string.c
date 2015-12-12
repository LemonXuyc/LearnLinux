#include <stdio.h>
/********************************************************************
gdb:
    x/10cb 0xbffff1234: display 10 bit of char from this address
*********************************************************************/
int main()
{
    char str[] = "hello";
    char *str2 = "world";//str2 is a character constant, and 
			// it cannot be written again for it is 
			// in code segment.
    char str3[10];
    printf("input the value \n");
    scanf("%s", str3);   //scanf not with *str3;
    printf("str is %s\n", str);
    printf("str2 is %s\n", str2);
    printf("str3 is %s\n", str3);
    return 0;
}
