
#include <iostream>
#include <string>

using namespace std;


// Generated from src/Stack.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  StackParser : public antlr4::Parser {
public:
  enum {
    COMMENT = 1, SPACE = 2, CODE = 3, END_CODE = 4, DATA = 5, END_DATA = 6, 
    PUSH_UC = 7, ADD_UC = 8, POP_UC = 9, HLT_UC = 10, NUMBER = 11
  };

  enum {
    RuleProgram = 0, RuleData = 1, RuleCode = 2, RuleInstr = 3
  };

  StackParser(antlr4::TokenStream *input);
  ~StackParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;




  class ProgramContext;
  class DataContext;
  class CodeContext;
  class InstrContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CodeContext *code();
    DataContext *data();

   
  };

  ProgramContext* program();

  class  DataContext : public antlr4::ParserRuleContext {
  public:
    DataContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *END_DATA();

   
  };

  DataContext* data();

  class  CodeContext : public antlr4::ParserRuleContext {
  public:
    CodeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CODE();
    antlr4::tree::TerminalNode *END_CODE();
    std::vector<InstrContext *> instr();
    InstrContext* instr(size_t i);

   
  };

  CodeContext* code();

  class  InstrContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *numberToken = nullptr;;
    InstrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PUSH_UC();
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *ADD_UC();
    antlr4::tree::TerminalNode *POP_UC();
    antlr4::tree::TerminalNode *HLT_UC();

   
  };

  InstrContext* instr();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

