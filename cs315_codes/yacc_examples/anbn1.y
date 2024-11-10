/*anbn1.y */
%token A B
%%
start:   anbn '\n' {printf("  is in anbn\n");
                    return 0;}
anbn:   A B
    |   A anbn B
    ;
%%
#include "lex.yy.c"
void yyerror(char *s) { printf("%s, it is not in anbn\n", s); }
int main() {
  return yyparse();
}
