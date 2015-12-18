#include <stdio.h>
/* An include and it is the way to import the contents of one file
   into this source file. C has a convention of using .h extensions for
   header files, which then contain lists of functons you want to use in
   you program. */

/* This is a comment. */
/* This is a multi-line comment and you could put as many lines of text 
   between the / and  closing / characters as you want.*/

/* A more complex version of main function you've been using blindly so 
   far. How C programs work is the operating system loads your program, 
   and then runs the function named main. For the function to be totally
   complete it needs to return an int and take two parameters, an int for
   the argument count, and an array of char * strings for the arguments.*/
int main(int argc, char *argv[])
{

/* To start the body of any function you write a { character that
   indicates the beginning of a "block". In Python you just did a : and
   indented. In other languages you might have a begin or do word to start*/

/* A variable declartion and assignment at the same time. This is how you
   create a variable, with the syntax type name = value; In C statements
   (except for logic) end in a ';' (semicolon) character */
    int distance = 100;

/* Another kind of comment, and it works like Python or Ruby comments 
   where it starts at the // and goes until the end of line.  */
    // this is also a comment. 

/* A call to your old friend printf. Like in many languages function
   calls work with the syntax name(arg1,arg2); and can have no arguments,
   or any number. The printf function is actually kind of weird and can
   take multiple arguments. We'll see that later. */
    printf("You are %d miles away.\n",distance);

/* A return from the main function, which gives the OS your exit value.
   You may not be familiar with how Unix software uses return codes, so
   we'll cover that as well. */
    return 0;

/* Finally, we end the main function with a closing brace } character and
   that's the end of the program. */
}

