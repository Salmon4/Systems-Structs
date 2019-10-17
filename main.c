
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int main(){
  printf("Example 1 of my struct and printed using printExamp(): \n");
  struct foodPower *a = structExamp();
  printExamp(a);
  printf("\n");

  printf("Example 2 of my struct and printed using printExamp(): \n");
  struct foodPower *b = structExamp();
  printExamp(b);
  printf("\n");

  printf("Example 3 of my struct and printed using printExamp(): \n");
  struct foodPower *c = structExamp();
  printExamp(c);
  printf("\n");

  printf("This is a struct: \n");
  struct foodPower *d = structExamp();
  printExamp(d);
  printf("\n");


  printf("This is the same struct after modifying it to sugar with 0 calories: \n");

  modifyExamp(d,"sugar", 0);
  printExamp(d);
  printf("\n");

  return 0;
}
