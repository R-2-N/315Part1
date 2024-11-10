/* float2.l */
/* Local variables can be defined */
%{
float val;
%}
%option main
digit [0-9]
sign [+-]
%%
float val;
{sign}?{digit}*(\.)?{digit}+ {sscanf(yytext, "%f", &val);
printf(">%f<", val);}
