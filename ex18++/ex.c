/* Example using #ifdef directive for inserting platform specific source code by TechOnTheNet.com */

#include <stdio.h>

#define UNIX 1

int main()
{
   #undef UNIX
   #ifdef UNIX
   printf("UNIX specific function calls go here.\n");
   #endif

   printf("TechOnTheNet is over 10 years old.\n");

   return 0;
}
