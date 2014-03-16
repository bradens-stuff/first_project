#include <stdio.h>
#include <string.h>
#include "defs.h"
int err();
int main(int argc, char *argv[]){
  if(argc > 1){
    if(!strcmp(argv[1], "atm")){
      atm();
    }else if(!strcmp(argv[1], "name")){
      name();
    }else if(!strcmp(argv[1], "divider")){
      divider();
    }else if(!strcmp(argv[1], "mean")){
      mean();
    }else{
      err();
    }
  }else{
   err(); 
  }
  return 0;
}

int err(){
  printf("Usage: atm|name|divider|mean\n");
  return 0;
}
