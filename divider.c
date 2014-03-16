#include <stdio.h>
#include "defs.h"
int divider(){
  double money;
  char choice;
  while(1){
    printf("Enter an amount of money: ");
    scanf(" %lf",&money);
    printf("%.2lf / 20 = %.2lf\n",money,money/20);
    printf("Would you like to continue? (y/n)");
    scanf(" %c",&choice);
    if(choice != 'y'){
      break;
    }
  }
  return 0;
}

