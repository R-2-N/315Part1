/* recursive.y */
%token A
%%
s: A 
 | A s A
;
