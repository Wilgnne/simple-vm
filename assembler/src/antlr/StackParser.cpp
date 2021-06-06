
    #include <iostream>
    // #include <vector>

    using namespace std;


// Generated from src/Stack.g4 by ANTLR 4.7.2



#include "StackParser.h"


using namespace antlrcpp;
using namespace antlr4;

StackParser::StackParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

StackParser::~StackParser() {
  delete _interpreter;
}

std::string StackParser::getGrammarFileName() const {
  return "Stack.g4";
}

const std::vector<std::string>& StackParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& StackParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

StackParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

StackParser::MainContext* StackParser::ProgramContext::main() {
  return getRuleContext<StackParser::MainContext>(0);
}


size_t StackParser::ProgramContext::getRuleIndex() const {
  return StackParser::RuleProgram;
}


StackParser::ProgramContext* StackParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, StackParser::RuleProgram);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);

            cout << ".source Test.src\n";
            cout << ".class  public Test\n";
            cout << ".super  java/lang/Object\n\n";
            cout << ".method public <init>()V\n";
            cout << "    aload_0\n";
            cout << "    invokenonvirtual java/lang/Object/<init>()V\n";
            cout << "    return\n";
            cout << ".end method\n\n";
        
    setState(11);
    main();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MainContext ------------------------------------------------------------------

StackParser::MainContext::MainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

StackParser::ExpressionContext* StackParser::MainContext::expression() {
  return getRuleContext<StackParser::ExpressionContext>(0);
}


size_t StackParser::MainContext::getRuleIndex() const {
  return StackParser::RuleMain;
}


StackParser::MainContext* StackParser::main() {
  MainContext *_localctx = _tracker.createInstance<MainContext>(_ctx, getState());
  enterRule(_localctx, 2, StackParser::RuleMain);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);

            cout << ".method public static main([Ljava/lang/String;)V\n\n";
            cout << "    getstatic java/lang/System/out Ljava/io/PrintStream;\n";
        
    setState(14);
    expression();

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
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

StackParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

StackParser::TermContext* StackParser::ExpressionContext::term() {
  return getRuleContext<StackParser::TermContext>(0);
}

StackParser::ExpressionContext* StackParser::ExpressionContext::expression() {
  return getRuleContext<StackParser::ExpressionContext>(0);
}

tree::TerminalNode* StackParser::ExpressionContext::PLUS() {
  return getToken(StackParser::PLUS, 0);
}


size_t StackParser::ExpressionContext::getRuleIndex() const {
  return StackParser::RuleExpression;
}


StackParser::ExpressionContext* StackParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 4, StackParser::RuleExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(17);
    term();
    setState(22);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == StackParser::PLUS) {
      setState(18);
      dynamic_cast<ExpressionContext *>(_localctx)->op = match(StackParser::PLUS);
      setState(19);
      expression();

              cout << "    iadd\n";
          
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

StackParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

StackParser::FactorContext* StackParser::TermContext::factor() {
  return getRuleContext<StackParser::FactorContext>(0);
}

StackParser::TermContext* StackParser::TermContext::term() {
  return getRuleContext<StackParser::TermContext>(0);
}

tree::TerminalNode* StackParser::TermContext::TIMES() {
  return getToken(StackParser::TIMES, 0);
}


size_t StackParser::TermContext::getRuleIndex() const {
  return StackParser::RuleTerm;
}


StackParser::TermContext* StackParser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 6, StackParser::RuleTerm);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(24);
    factor();
    setState(29);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == StackParser::TIMES) {
      setState(25);
      dynamic_cast<TermContext *>(_localctx)->op = match(StackParser::TIMES);
      setState(26);
      term();

              cout << "    imul\n";
          
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FactorContext ------------------------------------------------------------------

StackParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* StackParser::FactorContext::NUMBER() {
  return getToken(StackParser::NUMBER, 0);
}

tree::TerminalNode* StackParser::FactorContext::OP_PAR() {
  return getToken(StackParser::OP_PAR, 0);
}

StackParser::ExpressionContext* StackParser::FactorContext::expression() {
  return getRuleContext<StackParser::ExpressionContext>(0);
}

tree::TerminalNode* StackParser::FactorContext::CL_PAR() {
  return getToken(StackParser::CL_PAR, 0);
}


size_t StackParser::FactorContext::getRuleIndex() const {
  return StackParser::RuleFactor;
}


StackParser::FactorContext* StackParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 8, StackParser::RuleFactor);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(37);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StackParser::NUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(31);
        dynamic_cast<FactorContext *>(_localctx)->numberToken = match(StackParser::NUMBER);

                cout << "    ldc " << (dynamic_cast<FactorContext *>(_localctx)->numberToken != nullptr ? dynamic_cast<FactorContext *>(_localctx)->numberToken->getText() : "") << "\n";
                // symbol_table.push_back((dynamic_cast<FactorContext *>(_localctx)->numberToken != nullptr ? dynamic_cast<FactorContext *>(_localctx)->numberToken->getText() : ""));
            
        break;
      }

      case StackParser::OP_PAR: {
        enterOuterAlt(_localctx, 2);
        setState(33);
        match(StackParser::OP_PAR);
        setState(34);
        expression();
        setState(35);
        match(StackParser::CL_PAR);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> StackParser::_decisionToDFA;
atn::PredictionContextCache StackParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN StackParser::_atn;
std::vector<uint16_t> StackParser::_serializedATN;

std::vector<std::string> StackParser::_ruleNames = {
  "program", "main", "expression", "term", "factor"
};

std::vector<std::string> StackParser::_literalNames = {
  "", "'+'", "'*'", "'('", "')'"
};

std::vector<std::string> StackParser::_symbolicNames = {
  "", "PLUS", "TIMES", "OP_PAR", "CL_PAR", "NUMBER", "SPACE"
};

dfa::Vocabulary StackParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> StackParser::_tokenNames;

StackParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x8, 0x2a, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x19, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x20, 0xa, 0x5, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x28, 0xa, 0x6, 
    0x3, 0x6, 0x2, 0x2, 0x7, 0x2, 0x4, 0x6, 0x8, 0xa, 0x2, 0x2, 0x2, 0x27, 
    0x2, 0xc, 0x3, 0x2, 0x2, 0x2, 0x4, 0xf, 0x3, 0x2, 0x2, 0x2, 0x6, 0x13, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x1a, 0x3, 0x2, 0x2, 0x2, 0xa, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0xd, 0x8, 0x2, 0x1, 0x2, 0xd, 0xe, 0x5, 0x4, 0x3, 0x2, 
    0xe, 0x3, 0x3, 0x2, 0x2, 0x2, 0xf, 0x10, 0x8, 0x3, 0x1, 0x2, 0x10, 0x11, 
    0x5, 0x6, 0x4, 0x2, 0x11, 0x12, 0x8, 0x3, 0x1, 0x2, 0x12, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x13, 0x18, 0x5, 0x8, 0x5, 0x2, 0x14, 0x15, 0x7, 0x3, 
    0x2, 0x2, 0x15, 0x16, 0x5, 0x6, 0x4, 0x2, 0x16, 0x17, 0x8, 0x4, 0x1, 
    0x2, 0x17, 0x19, 0x3, 0x2, 0x2, 0x2, 0x18, 0x14, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0x19, 0x3, 0x2, 0x2, 0x2, 0x19, 0x7, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0x1f, 0x5, 0xa, 0x6, 0x2, 0x1b, 0x1c, 0x7, 0x4, 0x2, 0x2, 0x1c, 0x1d, 
    0x5, 0x8, 0x5, 0x2, 0x1d, 0x1e, 0x8, 0x5, 0x1, 0x2, 0x1e, 0x20, 0x3, 
    0x2, 0x2, 0x2, 0x1f, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x20, 0x3, 0x2, 
    0x2, 0x2, 0x20, 0x9, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 0x7, 0x7, 0x2, 
    0x2, 0x22, 0x28, 0x8, 0x6, 0x1, 0x2, 0x23, 0x24, 0x7, 0x5, 0x2, 0x2, 
    0x24, 0x25, 0x5, 0x6, 0x4, 0x2, 0x25, 0x26, 0x7, 0x6, 0x2, 0x2, 0x26, 
    0x28, 0x3, 0x2, 0x2, 0x2, 0x27, 0x21, 0x3, 0x2, 0x2, 0x2, 0x27, 0x23, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0xb, 0x3, 0x2, 0x2, 0x2, 0x5, 0x18, 0x1f, 
    0x27, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

StackParser::Initializer StackParser::_init;
