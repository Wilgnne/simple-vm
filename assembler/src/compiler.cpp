#include <iostream>

#include "antlr4-runtime.h"
#include "StackLexer.h"
#include "StackParser.h"

using namespace antlr4;

int main(int argc, const char *argv[])
{

    if (argc > 1)
    {
        freopen(argv[1], "r", stdin);

        if (argc > 2)
        {
            freopen(argv[2], "w", stdout);
        }
    }

    ANTLRInputStream input(std::cin);
    StackLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    StackParser parser(&tokens);

    parser.program();

    return 0;
}
