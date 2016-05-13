
// run ex10 (compile c executable, with too many args.)
var exec = require('child_process').exec;
var path = require('path');
var args = "";
var arg_count = Number(process.argv[2]);

var i = 0;
for (i = 0; i < arg_count; i += 1) {
  args += " " + i
}

var command = path.join(__dirname, "..", "bin" , "ex10") + args;
exec(command, (err, stdout, stderr) => {
  if (err) {
    console.error(err);
    return;
  }
  console.log(stdout);
});

