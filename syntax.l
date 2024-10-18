%option main

digit         [0-9]
alphabetic    [a-zA-Z]
alphanumeric  ({digit}|{alphabetic}}
sign          [+-]

%%

not
or
and
xor
<                             print("lesserop");
<=                            print("lessereqop");
>                             print("largerop");
>=                            print("largereqop");
%                             print("modulus");

return                        print("return");
for                           print("for");
while                         print("while");
do                            print("do");
if                            print("if");
else                          print("else");;
#.*                           print("comment");
(true)|(false)                print("boolean");
{sign}?{digit}                print("integer");
{sign}?{digit}+\.{digit}+     print("float");
{alphabetic}+{alphanumeric}*  print("variable");
".*"                          print("string");
