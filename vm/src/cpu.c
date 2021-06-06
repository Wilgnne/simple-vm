#include <stdio.h>
#include <stdbool.h>

#include <cpu.h>
#include <stack.h>
#include <instr.h>

int registers[NUM_OF_REGISTERS];
int *sp = &registers[SP];

int program[] = {
    PSH, 5,
    PSH, 6,
    ADD,
    POP,
    HLT};

bool running = true;

int fetch()
{
    return program[registers[PC]++];
}

void eval(int instr)
{
    switch (instr)
    {
    case HLT:
        running = false;
        break;

    case PSH:
        stack[++registers[SP]] = program[registers[PC]++];
        break;

    case POP:
        printf("popped: %d\n", stack[registers[SP]--]);
        break;

    case ADD:
    {
        int a = stack[registers[SP]--];
        int b = stack[registers[SP]--];
        stack[++registers[SP]] = a + b;
        break;
    }

    default:
        break;
    }
    debugStack();
}

int cpu()
{
    registers[PC] = 0;
    registers[SP] = -1;
    debugStack();
    while (running)
    {
        eval(fetch());
    }
}
