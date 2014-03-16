#include <stdio.h>
#include "defs.h"
int mean(){
  double total = 0;
  double temp;
  int num = 0;
  printf("Enter a range of numbers. When you're done, enter 0.\n");
  while(1){
    scanf("%lf", &temp);
    if(temp > 0){
      total += temp;
      num++;
    }else{
      break;
    }
  }
  printf("AVG: %.2lf\n", total / num);
  return 0;
}

