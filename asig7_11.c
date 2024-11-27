#include <stdio.h>
#include <string.h>

int main() {
  char myStr[] = "Learn C++ at W3schools";
  char *myPtr = strtok(myStr, " ");
  while (myPtr != NULL) {
    printf("%s\n", myPtr);
    myPtr = strtok(NULL, " ");
  }
  return 0;
}