#include <stdio.h>
/*
***************************
  how to use gdb to debug
***************************
gcc -g pointer.c -o pointer.out  :for gdb;
gdb ./pointer.out
list (or l)  :list code;   Enter :exeute the original command
start :debug
print (or p)  :print the value of a variable
n :execute the current line and jump to next line
step (or s) :step into sub function
bt :view function stack
f 1 :enter the function of number 1;
*/
void change(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	int a = 5;
	int b = 3;
	printf("num a = %d\nnum b = %d\n", a, b);
	change(&a, &b);
	printf("num a = %d\nnum b = %d\n", a, b);
	return 0;
}
