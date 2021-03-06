#include <stdio.h>

/* I include some new header files here to gain 
   access to some new functions. */
#include <assert.h>
#include <stdlib.h>
#include <string.h>

/* This is where I'm creating a structure that has 4
   elements to describe a person. The final result is 
   a new compound type that lets me referance these
   elements all as one, or each piece by name. It's
   similar to a row of a database table or class. */
struct Person 
{
    char *name;
    int age;
    int height;
    int weight;
};

/* I need a way to create these structures so I've made a function
   to do that. Here is the important things this function is doing:

   I use malloc for "memory allocate" to ask the OS to give me a 
   piece of raw memory.
 
   I pass to malloc the sizeof(struct Person) which calculates the 
   total size of the struct, given all the fields inside it.

   I use asert to make sure that I have a valid piece of memory back
   from malloc. There's a special constant called NULL that you use 
   to mean "unset or invalid pointer". This assert is basically 
   checking that malloc didn't return a NULL invalid pointer. 

   I initialize each field of struct Person using x->y syntax, to 
   say what part of the struct I want to set. 

   I use the strdup function to duplicate the string for the name, 
   just to make sure that this structure actually owns it. The strdup
   actually is like malloc and it also copies the original string 
   into the memory it creates.  */
struct Person *Person_create(char *name, int age, int height, int weight)
{
    struct Person *who = malloc(sizeof(struct Person));
    assert(who != NULL);

    who->name = strdup(name);
    who->age = age;
    who->height = height;
    who->weight = weight;

    return who;
}


/* If I have a create, then I always need a destroy function, and
   this is what destroys Person structs. I again use assert to make
   sure I'm not getting bad input. Then I use the function free to 
   return the memory I got with malloc and strdup. If you don't do
   this you get a "memory leak".  */
void Person_destroy(struct Person *who)
{
    assert(who != NULL);

    free(who->name);
    free(who);
}

/* I then need a way to print out people, which is all this function
   does. It uses the same x->y syntax to get the field from the 
   struct to print it. */
void Person_print(struct Person *who)
{
    printf("Name: %s\n", who->name);
    printf("\tAge: %d\n", who->age);
    printf("\tHeight: %d\n", who->height);
    printf("\tWeight: %d\n", who->weight);
}

/* In the main function I use all the previous functions and the
   struct Person to do the following:

   Create two people, joe and frank.
   Print them out, but notice I'm using the %p format so you can 
   see where the program has actually put your struct in memory.
   Age both of them by 20 years, with changes to their body too.
   Print each one after aging them.
   Finally destory the structures so we can clean up correctly. */
int main(int argc, char *argv[])
{
    //make two people structures
    struct Person *joe = Person_create(
           "Joe Alex", 32,64,140);

    struct Person *frank = Person_create(
           "Frank Blank", 20, 72, 180);
    //print them out and where they are in memory
    printf("Joe is at memory location %p:\n", joe);
    Person_print(joe);

    printf("Frank is at memory location %p:\n", frank);
    Person_print(frank);

    // make everyone age 20 years and print them again
    joe->age += 20;
    joe->height -= 2;
    joe->weight += 40;
    Person_print(joe);

    frank->age += 20;
    frank->weight += 20;
    Person_print(frank);

    // destory them both so we clean up 
    Person_destroy(joe);
    Person_destroy(frank);
   
    return 0;
}  

