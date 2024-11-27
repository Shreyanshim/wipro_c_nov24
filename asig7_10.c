#include <stdio.h>
#include <string.h>

int main() {
  char myStr[] = "The rain in Spain falls mainly on the plains";
  char *myPtr = strstr(myStr, "ain");
  if (myPtr != NULL) {
    printf("%s", myPtr);
  }
  return 0;
}