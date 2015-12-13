#include <stdio.h>
#include <malloc.h>
/*******************************
  how to create a dynamic linklist
***********************************/

struct weapon {
    int price;
    int atk;
    struct weapon * next;
};

struct weapon * create(){
    struct weapon * head;  //declare a head pointer;
    struct weapon * p1, *p2; //p1 points to the newly created node;
                             //p2 points to the last node;
    int n = 0; //n is the number of nodes;
    //malloc is a function used to allocate memory blocks;
    p1 = p2 = (struct weapon*)malloc(sizeof(struct weapon));//p1,p2 point to the same node;
    scanf("%d,%d", &p1->price, &p1->atk);//enter data for the firstnode;
    head = NULL;//head pointer assignment to NULL;
    while(p1->price != 0){   //stop the cycle when price = 0;
        n++;
        if(n == 1) head = p1; //the first node;
        else p2->next = p1; 
        
        p2 = p1;//p2 became the last node;
        p1 = (struct weapon*)malloc(sizeof(struct weapon));
        scanf("%d,%d",&p1->price, &p1->atk);//assignment for the current node;
    }
    p2->next = NULL;
    return (head);//return head pointer;
}


int main(){
    struct weapon *p;
    p = create();
    printf("%d,%d\n", p->price, p->atk);


    return 0;
}
