/**************************************************************
 *
 * userprog/ksyscall.h
 *
 * Kernel interface for systemcalls 
 *
 * by Marcus Voelp  (c) Universitaet Karlsruhe
 *
 **************************************************************/

#ifndef __USERPROG_KSYSCALL_H__ 
#define __USERPROG_KSYSCALL_H__ 

#include "kernel.h"
#include "synchconsole.h"



void SysHalt()
{
  kernel->interrupt->Halt();
}


int SysAdd(int op1, int op2)
{
  return op1 + op2;
}

// --------------------------------------------------------------------

// threads/kernel.cc
// userprog/synchconsole.cc
// synchConsoleIn is pointer of SynchConsoleInput
// Having method GetChar()
char SysReadChar()
{
	SynchConsoleInput* inp = (SynchConsoleInput*)kernel->synchConsoleIn;
	return inp->GetChar();
}

// --------------------------------------------------------------------

#endif /* ! __USERPROG_KSYSCALL_H__ */
