#include <stdio.h>
void foo() {
  int n = 5;
  printf("in foo: n=%d\n", n);
  n++;
} // foo

void bar() {
  static int i = 7;
  i++;
  printf("in bar: i=%d\n", i);
}
void main() {
  foo();
  foo();
  bar();
  bar();
} // main
