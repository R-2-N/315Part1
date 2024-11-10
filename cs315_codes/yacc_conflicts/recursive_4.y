/* recursive.y */
%token A B
%%
s: A B
 | A s B
;
