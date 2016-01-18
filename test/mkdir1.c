/* halt.c
 *	Simple program to test whether running a user program works.
 *	
 *	Just do a "syscall" that shuts down the OS.
 *
 * 	NOTE: for some reason, user programs with global data structures 
 *	sometimes haven't worked in the Nachos environment.  So be careful
 *	out there!  One option is to allocate data structures as 
 * 	automatics within a procedure, but if you do this, you have to
 *	be careful to allocate a big enough stack to hold the automatics!
 */

#include "syscall.h"

int
main()
{
	Mkdir("/root");
	Mkdir("/test1");
	Mkdir("/test2");
	Mkdir("/test3");
	Mkdir("/test4");
	Mkdir("/test5");
	Mkdir("/test6");
	Mkdir("/test7");
	Mkdir("/test8");
	Mkdir("/test9");
	Mkdir("/test10");
	Mkdir("/test11");
    Exit(0);
}
