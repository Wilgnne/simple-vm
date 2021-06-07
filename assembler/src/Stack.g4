grammar Stack;

/*---------------- PARSER INTERNALS ----------------*/

@parser::definitions {
#include "instr.h"
}

@parser::header {
#include <iostream>
#include <string>

using namespace std;
}

@parser::members {
}

/*---------------- LEXER RULES ----------------*/

COMMENT: ';' ~('\n')* -> skip;
SPACE: (' ' | '\t' | '\r' | '\n')+ -> skip;

CODE: '.code';
END_CODE: '.endcode';

DATA: '.data';
END_DATA: '.enddata';

PUSH_UC: 'psh';
ADD_UC: 'add';
POP_UC: 'pop';
HLT_UC: 'hlt';

NUMBER: '0' ..'9'+;

/*---------------- PARSER RULES ----------------*/

program: data? code;

data: DATA END_DATA;

code: CODE (instr)* END_CODE;

instr:
	PUSH_UC NUMBER { cout.put(PSH).put(stoi($NUMBER.text)); }
	| ADD_UC { cout.put(ADD); }
	| POP_UC { cout.put(POP); }
	| HLT_UC { cout.put(HLT); };
