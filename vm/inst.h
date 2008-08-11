#ifndef _INST_H_
#define _INST_H_

/* based on YARV instructions, http://www.atdot.net/yarv/insnstbl.html */
typedef enum {
  NOP = 0,
  GETLOCAL,
  SETLOCAL,
  GETSPECIAL,
  SETSPECIAL,
  GETDYNAMIC,
  SETDYNAMIC,
  GETINSTANCEVARIABLE,
  SETINSTANCEVARIABLE,
  GETCLASSVARIABLE,
  SETCLASSVARIABLE,
  GETCONSTANT,
  SETCONSTANT,
  GETGLOBAL,
  SETGLOBAL,
  PUTNIL,
  PUTSELF,
  PUTUNDEF,
  PUTOBJECT,
  PUTSTRING,
  CONCATSTRINGS,
  TOSTRING,
  TOREGEXP,
  NEWARRAY,
  DUPARRAY,
  EXPANDARRAY,
  CONCATARRAY,
  SPLATARRAY,
  CHECKINCLUDEARRAY,
  NEWHASH,
  NEWRANGE,
  PUTNOT,
  POP,
  DUP,
  DUPN,
  SWAP,
  REPUT,
  TOPN,
  EMPTSTACK,
  DEFINEMETHOD,
  ALIAS,
  UNDEF,
  DEFINED,
  POSTEXE,
  TRACE,
  DEFINECLASS,
  SEND,
  INVOKESUPER,
  INVOKEBLOCK,
  LEAVE,
  FINISH,
  THROW,
  JUMP,
  BRANCHIF,
  BRANCHUNLESS,
  
  /* my own lil instructions */
  LABEL,     /* = 55 */
  PUTFIXNUM,
  PUTSYMBOL,
  PUTSPECIAL
} tr_inst_e;

#endif /* _INST_H_ */