/* readstring.c
 *	Simple program to test whether the systemcall interface works.
 *	
 *	Just do a readstring syscall that read a string from console.
 *
 */

#include "syscall.h"

int main()
{
    char result[1000];
    ReadString(result, 1000);
    Halt();
  /* not reached */
}