/* recursive.y */
%token A
%%
s: A 
 | s A A
;
