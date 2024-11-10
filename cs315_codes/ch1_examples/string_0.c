#include <stdio.h>

void foo (char str[]) {
    str[4] = 'z';
    printf("5th char in %s is %c\n", str, str[4]);
} // foo

void main () {
  char name[] = "Ali";
  printf("5th char in %s is %c\n", name, name[4]);
  foo (name);
  printf("5th char in %s is %c\n", name, name[4]);
}
