function foo () {
  console.log("in foo, x="+x);
  x = 7;
  console.log("in foo, x="+x);
  var x=3;
}

foo();
