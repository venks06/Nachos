#include "syscall.h"

int main()
{
  int size,i,size1;
  char newline = '\n';
  void *address1;
  char *a1;
  char *x1;
  void *address = (void *) Mmap("test", &size);
  if(size > 0) {
	  char *a = (char *) address;
	  char x = a[0];
	  for(i=0;i<10;i++) {
	    x = &a[i];
	    Write(&a[i],1,ConsoleOutput);
	  }
	  Write(&newline,1,ConsoleOutput);
	  x = a[138];
	  for(i=138;i<148;i++) {
	    x = &a[i];
	    Write(&a[i],1,ConsoleOutput);
	  }
	  Write(&newline,1,ConsoleOutput);
	  x = a[276];
	  for(i=276;i<286;i++) {
	    x = &a[i];
	    Write(&a[i],1,ConsoleOutput);
	  }
	  Write(&newline,1,ConsoleOutput);
	  a[0] = 'A';
	  Write(&a[0],1,ConsoleOutput);
	  Write(&newline,1,ConsoleOutput);
	  Munmap(address);
  }
 
 
  address1 = (void *) Mmap("test1", &size1);
  if(size1 > 0) {
	  a1 = (char *) address1;
	  x1 = a1[0];
	  for(i=0;i<10;i++) {
	    x1 = &a1[i];
	    Write(&a1[i],1,ConsoleOutput);
	  }
	  Write(&newline,1,ConsoleOutput);
	  x1 = a1[138];
	  for(i=138;i<148;i++) {
	    x1 = &a1[i];
	    Write(&a1[i],1,ConsoleOutput);
	  }
	  Write(&newline,1,ConsoleOutput);
	  x1 = a1[276];
	  for(i=276;i<286;i++) {
	    x1 = &a1[i];
	    Write(&a1[i],1,ConsoleOutput);
	  }
	  Write(&newline,1,ConsoleOutput);
	  Munmap(address1);
  }
  Exit(0);
}
