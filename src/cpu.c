#include <include/cpu.h>

int fetch()
{
    return program[ip++];
}