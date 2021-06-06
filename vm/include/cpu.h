typedef enum
{
    PC,
    SP,
    NUM_OF_REGISTERS
} Registers;

extern int registers[];

extern int program[];

int cpu();
