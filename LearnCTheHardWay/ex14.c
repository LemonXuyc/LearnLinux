/* In this example you're creating functions to print out the
  characters and ASCII codes for any that "alpha" or "blanks"
**************************************************************/

#include <stdio.h>

/* Include a new header file so we can gain access to isalpha
  and isblank. */
#include <ctype.h>

/* Tell C that you will be using some functions later in
  your program, without having to actually define them.
  This is a "forward declaration" and it solves the 
  chicken-and-egg problem of needing to use a function
  before you've defined it. */
/* forward declarations */
int can_print_it(char ch);
void print_letters(char arg[]);

/* Define the print_argument which knows how to print
  the same array of strings that main typically gets. */
void print_arguments(int argc, char *argv[])
{
    int i = 0;

    for(i = 0; i < argc; i++)
    {
        print_letters(argv[i]);
    }
}

/* Define the next function print_letters that is called by
  print_arguments and knows how to print each of the
  charaters and their codes. */
void print_letters(char arg[])
{
    int i = 0;
    
    for(i = 0; arg[i] != '\0'; i++)
    {
        char ch = arg[i];

        if(can_print_it(ch))
        {
            printf("'%c' == %d ", ch, ch);
        }
    }

    printf("\n");
}

/* Define can_print_it which simply returns the truth
  value (0 or 1) of isalpa(ch) || isblank(ch) back to its
  call print_letters. */
int can_print_it(char ch)
{
    return isalpha(ch) || isblank(ch);
}

/* Finally main simply calls print_arguments to make the
  whole chain of function calls go. */
int main(int argc, char *argv[])
{
    print_arguments(argc, argv);
    return 0;
}
