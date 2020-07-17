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

void eval(int instr)
{
    switch (instr)
    {
    case HLT:
        running = false;
        break;
    
    default:
        break;
    }
}

int cpu()
{
    int instr;

    while (running)
    {
        instr = fetch();
        eval(instr);
    }
}
