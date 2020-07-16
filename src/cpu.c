#include <cpu.h>

int program[] = {
    PSH, 5,
    PSH, 6,
    ADD,
    POP,
    HLT};

int ip = 0;

int fetch()
{
    return program[ip++];
}