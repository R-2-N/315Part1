/* float0.l */
%option main
%%
[+-]?[0-9]*(\.)?[0-9]+ printf("FLOAT");
