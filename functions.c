#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct foodPower{char* food; int calories;};

struct foodPower * structExamp(){
  char* allFoods[] = {"banana", "burger", "salad", "water"};
  int randomFoodIndex = rand() % 4;
  int randomCalories = rand() % 1000 + 1;
  struct foodPower example;
  example.food = allFoods[randomFoodIndex];
  example.calories = randomCalories;
  struct foodPower *result = &example;
  return result;
}

void printExamp(struct foodPower *consumable){
  //printf("Food: %s \n", consumable->food);
  //printf("Calories: %d \n", consumable->calories);
  printf("food: %s \ncalories: %d \n", (*consumable).food, (*consumable).calories);
}

void modifyExamp(struct foodPower *consumable, char *newFood, int newCalories){
  consumable -> food = newFood;
  consumable -> calories = newCalories;
}
