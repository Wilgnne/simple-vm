#include <stdio.h>

#include <stack.h>

int stack[256];

void debugStack()
{
    int i;
    printf("Stack: [");
    for (i = 0; i <= *sp; i++)
    {
        if (i == *sp)
            printf("%i", stack[i]);
        else
            printf("%i, ", stack[i]);
    }
    printf("]\t\tsp: %i\n", *sp);
}
