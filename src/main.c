#include <stdbool.h>

#include <cpu.h>

bool running = true;

int main(int argc, char const *argv[])
{
    int instr;

    while (running)
    {
        instr = fetch();
        if (instr == HLT)
            running = false;
    }

    return 0;
}
