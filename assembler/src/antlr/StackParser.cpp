
#include <iostream>
#include <string>

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


#include "instr.h"


//----------------- ProgramContext ------------------------------------------------------------------

StackParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

StackParser::CodeContext* StackParser::ProgramContext::code() {
  return getRuleContext<StackParser::CodeContext>(0);
}

StackParser::DataContext* StackParser::ProgramContext::data() {
  return getRuleContext<StackParser::DataContext>(0);
}


size_t StackParser::ProgramContext::getRuleIndex() const {
  return StackParser::RuleProgram;
}


StackParser::ProgramContext* StackParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, StackParser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(9);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == StackParser::DATA) {
      setState(8);
      data();
    }
    setState(11);
    code();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DataContext ------------------------------------------------------------------

StackParser::DataContext::DataContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* StackParser::DataContext::DATA() {
  return getToken(StackParser::DATA, 0);
}

tree::TerminalNode* StackParser::DataContext::END_DATA() {
  return getToken(StackParser::END_DATA, 0);
}


size_t StackParser::DataContext::getRuleIndex() const {
  return StackParser::RuleData;
}


StackParser::DataContext* StackParser::data() {
  DataContext *_localctx = _tracker.createInstance<DataContext>(_ctx, getState());
  enterRule(_localctx, 2, StackParser::RuleData);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(13);
    match(StackParser::DATA);
    setState(14);
    match(StackParser::END_DATA);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CodeContext ------------------------------------------------------------------

StackParser::CodeContext::CodeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* StackParser::CodeContext::CODE() {
  return getToken(StackParser::CODE, 0);
}

tree::TerminalNode* StackParser::CodeContext::END_CODE() {
  return getToken(StackParser::END_CODE, 0);
}

std::vector<StackParser::InstrContext *> StackParser::CodeContext::instr() {
  return getRuleContexts<StackParser::InstrContext>();
}

StackParser::InstrContext* StackParser::CodeContext::instr(size_t i) {
  return getRuleContext<StackParser::InstrContext>(i);
}


size_t StackParser::CodeContext::getRuleIndex() const {
  return StackParser::RuleCode;
}


StackParser::CodeContext* StackParser::code() {
  CodeContext *_localctx = _tracker.createInstance<CodeContext>(_ctx, getState());
  enterRule(_localctx, 4, StackParser::RuleCode);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(16);
    match(StackParser::CODE);
    setState(20);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << StackParser::PUSH_UC)
      | (1ULL << StackParser::ADD_UC)
      | (1ULL << StackParser::POP_UC)
      | (1ULL << StackParser::HLT_UC))) != 0)) {
      setState(17);
      instr();
      setState(22);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(23);
    match(StackParser::END_CODE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstrContext ------------------------------------------------------------------

StackParser::InstrContext::InstrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* StackParser::InstrContext::PUSH_UC() {
  return getToken(StackParser::PUSH_UC, 0);
}

tree::TerminalNode* StackParser::InstrContext::NUMBER() {
  return getToken(StackParser::NUMBER, 0);
}

tree::TerminalNode* StackParser::InstrContext::ADD_UC() {
  return getToken(StackParser::ADD_UC, 0);
}

tree::TerminalNode* StackParser::InstrContext::POP_UC() {
  return getToken(StackParser::POP_UC, 0);
}

tree::TerminalNode* StackParser::InstrContext::HLT_UC() {
  return getToken(StackParser::HLT_UC, 0);
}


size_t StackParser::InstrContext::getRuleIndex() const {
  return StackParser::RuleInstr;
}


StackParser::InstrContext* StackParser::instr() {
  InstrContext *_localctx = _tracker.createInstance<InstrContext>(_ctx, getState());
  enterRule(_localctx, 6, StackParser::RuleInstr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(34);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StackParser::PUSH_UC: {
        enterOuterAlt(_localctx, 1);
        setState(25);
        match(StackParser::PUSH_UC);
        setState(26);
        dynamic_cast<InstrContext *>(_localctx)->numberToken = match(StackParser::NUMBER);
         cout.put(PSH).put(stoi((dynamic_cast<InstrContext *>(_localctx)->numberToken != nullptr ? dynamic_cast<InstrContext *>(_localctx)->numberToken->getText() : ""))); 
        break;
      }

      case StackParser::ADD_UC: {
        enterOuterAlt(_localctx, 2);
        setState(28);
        match(StackParser::ADD_UC);
         cout.put(ADD); 
        break;
      }

      case StackParser::POP_UC: {
        enterOuterAlt(_localctx, 3);
        setState(30);
        match(StackParser::POP_UC);
         cout.put(POP); 
        break;
      }

      case StackParser::HLT_UC: {
        enterOuterAlt(_localctx, 4);
        setState(32);
        match(StackParser::HLT_UC);
         cout.put(HLT); 
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
  "program", "data", "code", "instr"
};

std::vector<std::string> StackParser::_literalNames = {
  "", "", "", "'.code'", "'.endcode'", "'.data'", "'.enddata'", "'psh'", 
  "'add'", "'pop'", "'hlt'"
};

std::vector<std::string> StackParser::_symbolicNames = {
  "", "COMMENT", "SPACE", "CODE", "END_CODE", "DATA", "END_DATA", "PUSH_UC", 
  "ADD_UC", "POP_UC", "HLT_UC", "NUMBER"
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
    0x3, 0xd, 0x27, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x3, 0x2, 0x5, 0x2, 0xc, 0xa, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 
    0x15, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x18, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x25, 0xa, 0x5, 0x3, 0x5, 0x2, 0x2, 0x6, 
    0x2, 0x4, 0x6, 0x8, 0x2, 0x2, 0x2, 0x27, 0x2, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0x4, 0xf, 0x3, 0x2, 0x2, 0x2, 0x6, 0x12, 0x3, 0x2, 0x2, 0x2, 0x8, 0x24, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0xc, 0x5, 0x4, 0x3, 0x2, 0xb, 0xa, 0x3, 0x2, 
    0x2, 0x2, 0xb, 0xc, 0x3, 0x2, 0x2, 0x2, 0xc, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0xd, 0xe, 0x5, 0x6, 0x4, 0x2, 0xe, 0x3, 0x3, 0x2, 0x2, 0x2, 0xf, 0x10, 
    0x7, 0x7, 0x2, 0x2, 0x10, 0x11, 0x7, 0x8, 0x2, 0x2, 0x11, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x16, 0x7, 0x5, 0x2, 0x2, 0x13, 0x15, 0x5, 0x8, 
    0x5, 0x2, 0x14, 0x13, 0x3, 0x2, 0x2, 0x2, 0x15, 0x18, 0x3, 0x2, 0x2, 
    0x2, 0x16, 0x14, 0x3, 0x2, 0x2, 0x2, 0x16, 0x17, 0x3, 0x2, 0x2, 0x2, 
    0x17, 0x19, 0x3, 0x2, 0x2, 0x2, 0x18, 0x16, 0x3, 0x2, 0x2, 0x2, 0x19, 
    0x1a, 0x7, 0x6, 0x2, 0x2, 0x1a, 0x7, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x1c, 
    0x7, 0x9, 0x2, 0x2, 0x1c, 0x1d, 0x7, 0xd, 0x2, 0x2, 0x1d, 0x25, 0x8, 
    0x5, 0x1, 0x2, 0x1e, 0x1f, 0x7, 0xa, 0x2, 0x2, 0x1f, 0x25, 0x8, 0x5, 
    0x1, 0x2, 0x20, 0x21, 0x7, 0xb, 0x2, 0x2, 0x21, 0x25, 0x8, 0x5, 0x1, 
    0x2, 0x22, 0x23, 0x7, 0xc, 0x2, 0x2, 0x23, 0x25, 0x8, 0x5, 0x1, 0x2, 
    0x24, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x24, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0x20, 0x3, 0x2, 0x2, 0x2, 0x24, 0x22, 0x3, 0x2, 0x2, 0x2, 0x25, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0x5, 0xb, 0x16, 0x24, 
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
