#include <stdbool.h>

#include <cpu.h>
#include <stack.h>
#include <instr.h>

int ip = 0;
int sp = -1;

int program[] = {
    PSH, 5,
    PSH, 6,
    ADD,
    POP,
    HLT};

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

    case PSH:
        stack[++sp] = program[ip++];
        break;

    default:
        break;
    }
    debugStack();
}

int cpu()
{
    debugStack();
    while (running)
    {
        eval(fetch());
    }
}
