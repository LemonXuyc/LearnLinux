#include <stdio.h>
/***************
redirection
***************
input redirection:
	./a.out < input.txt
output redirection:
	./a.out 1>> ture.txt 2>> flase.txt
error redirection:
	1 for correct output;
	2 for correct output;
	> cover the old message;
	>> (double) add message after old message;
*/
int main()
{
	printf("input the int value i:\n");
	int i, j;
	scanf("%d", &i);
	printf("input the int value j:\n");
	scanf("%d", &j);
	if(0 != j){
		printf("%d / %d = %d\n", i, j, i/j);
	}else{
		fprintf(stderr, "j != 0\n");
		return 1;
	}
	return 0;
}
