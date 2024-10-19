%option main

digit         [0-9]
alphabetic    [a-zA-Z]
alphanumeric  ({digit}|{alphabetic})
sign          [+-]

%%

not                           print("not");
or                            print("or");
and                           print("and");
xor                           print("xor");
==                            print("equals");
=                             print("assignment");
<                             print("lesserop");
<=                            print("lessereqop");
>                             print("largerop");
>=                            print("largereqop");
%                             print("modulus");
+                             print("plus");
-                             print("minus")
*                             print("multiplication");
//                            print("comment");
/                             print("division");
(                             print("leftP");
)                             print("rightP");
[                             print("leftAngledP");
]                             print("rightAngledP");
{                             print("leftCurly");
}                             print("rightCurly");


(int|string|bool|float|double|char)                           print("type");
continue                      print("continue");
break                         print("break");
return                        print("return");
for                           print("for");
while                         print("while");
do                            print("do");
if                            print("if");
else                          print("else");
#.*                           print("comment");
(true)|(false)                print("boolean");
{sign}?{digit}                print("integer");
{sign}?{digit}+\.{digit}+     print("float");
'.'                           print("char");
{alphabetic}+{alphanumeric}*  print("variable");
".*"                          print("string");
(getHeading|getAltitude|getTime|ascend|descend|verticalStop|moveForward|moveBackward|horizontalStop|turnLeft1Deg|turnRight1Deg|enableSpray|disableSpray) print("primitivefunction");
