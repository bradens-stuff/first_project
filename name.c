#include <stdio.h>
#include "defs.h"
int name(){
  char out[0xFF];
  printf("Please Enter your name: ");
  scanf("%s",out);
  printf("Hi, %s!\n",out);
  return 0;
}
