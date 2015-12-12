#include <stdio.h>
union data{
  int a;
  char b;
  int c;
};//the size of union is equal to the longest type 
  //in this example it is 4byte

struct data2{
  int d;
  char e;
  int f;
};//the size of struct data2 = 4 + 1 +3 +4 =12; 

int main(){
  
  union data data_1;
  data_1.b = 'C';
  data_1.a = 10;
//the address of the members of union are the same, so the address can be used by one member only
  printf("%p\n%p\n%p\n",&data_1.a,&data_1.b,&data_1.c);
  printf("size of union data :%lu\n",sizeof(union data));
  printf("size of struct data2:%lu\n",sizeof(struct data2));
  return 0;

}
