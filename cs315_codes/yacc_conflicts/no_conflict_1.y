%token A B C D E F
%%
start: x | y ;
x: A B z D E ;
y: A B z D F ;
z: C;
