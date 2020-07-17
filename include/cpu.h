typedef enum
{
    A,
    B,
    C,
    D,
    E,
    F,
    PC,
    SP,
    NUM_OF_REGISTERS
} Registers;

extern int registers[];

extern int program[];

int cpu();
