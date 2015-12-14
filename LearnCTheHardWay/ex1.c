#include <stdio.h>
int main(int argc, char *argv[])
{
    puts("Hello world.");
    puts("make ex1 == cc ex1.c -o ex1");
    puts("CFLAGS='-Wall' make ex1 == cc -Wall ex1.c -o ex1");
    puts("and you will getting a warning.");    
    puts("if there are something wrong in your codes.");
    return 0;
}
