#include <stdio.h>
#include "defs.h"

int atm(void){
  int money;
  char choice;
  printf("Enter an amount of money to withdraw: $");
  scanf("%i",&money);
  if((money <= CHECKING_MAX || money <= SAVINGS_MAX) && money % 20 == 0 && money > 0){
    printf("Your change: %d $20 bill%c.\n",money/20,money == 20 ? 0 : 's');
    printf("Would you like to make another transaction? (y/n) ");
    scanf(" %c",&choice);
    if(choice == 'y'){
      atm();
    }else{
      printf("Goodbye\n");
      return 0;
    }
  }else{
    printf("Transaction Denied.\n");
    atm();
  }
  return 0;
}
