#include <stdio.h>
/********************************
    the structure of memory
*********************************
system kernel	high address
stack segment
customing
heap segment
data segment
code segment	low address
********************************
an example of pointer :  if
	int a = 3;
	int *pa = a;    then:

p a :the value of a;
p &a :the address of a;
p pa :the address of pa == &a;
p *pa :the value of a;
***********************************/
int global = 0;

int rect(int a, int b)
{
	static int count = 0;
	count++;
	global++;
	int s = a * b;
	return s;
}

int quadrate(int a)
{
	static int count = 0;
	count++;
	global++;
	int s = rect(a, a);
	return s;
}

int main()
{
	int a = 3;
	int b = 4;
	int *pa = &a;
	int *pb = &b;
	int *pglobal = &global;
	int (*pquadrate)(int a) = &quadrate;
       	//int s = quadrate(a);
	int s = (*pquadrate)(a);
	printf("%d\n", s);
	return 0;
}
