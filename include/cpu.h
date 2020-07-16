typedef enum
{
    PSH,
    ADD,
    POP,
    SET,
    HLT
} InstructionSet;

extern int program[];

extern int ip;

int fetch();