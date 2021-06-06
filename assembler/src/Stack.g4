grammar Stack;

/*---------------- PARSER INTERNALS ----------------*/

@parser::header
{
    #include <iostream>
    using namespace std;
}

@parser::members
{
}

/*---------------- LEXER RULES ----------------*/

PLUS  : '+' ;
TIMES : '*' ;
OP_PAR: '(' ;
CL_PAR: ')' ;

NUMBER: '0'..'9'+ ;

SPACE : (' '|'\t'|'\r'|'\n')+ -> skip ;

/*---------------- PARSER RULES ----------------*/

program:
    {
        cout << ".source Test.src\n";
        cout << ".class  public Test\n";
        cout << ".super  java/lang/Object\n\n";
        cout << ".method public <init>()V\n";
        cout << "    aload_0\n";
        cout << "    invokenonvirtual java/lang/Object/<init>()V\n";
        cout << "    return\n";
        cout << ".end method\n\n";
    }
    main ;

main:
    {
        cout << ".method public static main([Ljava/lang/String;)V\n\n";
        cout << "    getstatic java/lang/System/out Ljava/io/PrintStream;\n";
    }
    expression
    {
        cout << "    invokevirtual java/io/PrintStream/println(I)V\n\n";
        cout << "    return\n";
        cout << ".limit stack 10\n";
        cout << ".end method\n";
        // cout << "\n; symbol_table: ";
        // for (vector<string>::const_iterator i = symbol_table.begin(); i != symbol_table.end(); i++) {
        //     cout << *i << ' ';
        // }
        // cout << "\n";
    }
    ;

expression:
    term ( op = PLUS expression
    {
        cout << "    iadd\n";
    }
    )? ;

term:
    factor ( op = TIMES term
    {
        cout << "    imul\n";
    }
    )? ;

factor:
    NUMBER
    {
        cout << "    ldc " << $NUMBER.text << "\n";
        // symbol_table.push_back($NUMBER.text);
    }
    | OP_PAR expression CL_PAR ;

