#include <stdbool.h>

#include <cpu.h>

int program[] = {
    PSH, 5,
    PSH, 6,
    ADD,
    POP,
    HLT};

int ip = 0;
bool running = true;

int fetch()
{
    return program[ip++];
}

int cpu()
{
    int instr;

    while (running)
    {
        instr = fetch();
        if (instr == HLT)
            running = false;
    }
}
