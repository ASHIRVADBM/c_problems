#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "header.h"
int main()
{
   char str[]="HELLO WORLD";
   lowercase(str);
   assert(strcmp(str,"hello world")==0);
   return 0;


}
