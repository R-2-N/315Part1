#include <stdio.h>

void foo(float a) {
    printf("a: %g and square(a): %g\n", a, a * a);    
}

int main(int argc, char const *argv[])
{
    int x = 5;
    char z = 'b';
    foo(z);   // programmer typed z for x, by mistake
    return 0;
}
