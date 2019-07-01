#include <stdio.h>

int main(){
  void printStar();
  void printMessage();
  printStar();
  printMessage();
  printStar();
  return 0;
}

void printStar(){
    printf("**********\n");
}

void printMessage(){
    printf("Hello function\n");
}
