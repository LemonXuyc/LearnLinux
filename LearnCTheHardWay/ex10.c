#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    /* go through each string in argv */
    /* why am I skipping argv[0]? */
    /* The program's name is at 0, with the rest coming agter it*/
    for(i = 1; i < argc; i++)
    {
        printf("arg %d: %s\n", i, argv[i]);
    }

    /* let's make our own array of strings */
    char *states[] = {
        "California", "Oregon",
        "Washington", "Texas",NULL
    };
    int num_states = 4;

    for(i = 0; i < num_states; i++)
    {
        printf("states %d: %s\n", i, states[i]);
    }

    return 0;
}
