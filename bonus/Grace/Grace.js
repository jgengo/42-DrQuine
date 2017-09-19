var fs = require('fs');
/*
  comment
*/
(function foo() {
fs.writeFileSync("Grace_kid.js", "var fs = require('fs');\n/*\n  comment\n*/\n(" + foo.toString() + ")();\n");
})();
