var fs = require('fs');
/*
  comment
*/
let x=1;
let y=2;
let z=3;
(function foo() {
fs.writeFileSync("Grace_kid.js", "var fs = require('fs');\n/*\n  comment\n*/\nlet x=1;\nlet y=2;\nlet z=3;\n(" + foo.toString() + ")();\n");
})();
