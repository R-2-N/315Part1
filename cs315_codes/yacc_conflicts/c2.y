%token A B
%%
start: x B | y B ;
x: A ;
y: A ;
