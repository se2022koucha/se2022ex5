#include <stdio.h>
#include <string.h>
int main(void) {
  char str[100] = "hello";
  printf("%s %d", str, strlen(str));
  return 0;
}