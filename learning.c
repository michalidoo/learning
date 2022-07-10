#include <stdio.h>


int main() {
  int firstint = 4;
  char firstchar = 'M';
  
  printf("first output\n");
  printf("Number: %d\n", firstint);
  printf("Letter: %c\n", firstchar);

  
  firstchar = 'N';
  printf("Letter: %c\n", firstchar);
  firstint = 194;
  firstint = 55-33;
  firstint = firstint+9;
  firstint += 3;
  firstint++;
  firstint--;
  ++firstint;

  
  if (firstchar == 'M') {
    printf("M is the best!\n");
  } else if (firstchar == 'N') {
    printf("N is the second best!\n");
  } else {
    printf("The variable is not M or N :(\n");
  }

  int index = 0;
  while (index < 10) {
    printf("index = %d", index);
    index = index + 1
  }
  
  return 0;
}
