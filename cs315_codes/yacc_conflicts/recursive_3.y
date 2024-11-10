/* recursive.y */
%token A
%%
s: A 
 | A A s
;
