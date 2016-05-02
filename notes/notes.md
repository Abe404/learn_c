
# Notes on Learn C the Hard way 

Intended for me to document and answer my own questions about things I don't understand.

### EX2
#### What is ex1.dSYM and why is being created?

##### TODO mention its relation to clang.

  It is a directory which includes debug information.
> On MacOSX debug symbols are often in stand alone bundles called dSYM files. 
These are bundles that contain DWARF debug information and other resources related to builds and debug info. [0]

#### What is DWARF debug information?
> DWARF is a debugging file format used by many compilers and debuggers to support source level debugging. [1]

For further info this is an 11 page introduction to the drawf debugging format [2]



#### TODO: Read this and update my Makefile with anything that looks likei it could be useful

https://www.cs.swarthmore.edu/~newhall/unixhelp/howto_makefiles.html


#### TODO: Understand every command in this makefile, also take useful elements and add to my own.
https://github.com/rohanorton/plan.c/blob/master/rohan_code/learn_c_the_hard_way/Makefile




### EX3

#### TODO: What else is in stdio.h apart from printf?

#### TODO: What are all of the printf excape codes and format sequences?
Find all of the ones available, how you can modify them and what kind of 
"precisions" and widths you can do.

Some example excape codes are: \n or \t. 

Some example format sequences are %s or %d.


__Sources__

TODO: Move these into links inline as it will get easier to break this file up if i need to do so in the future.
* [0] http://lldb.llvm.org/symbols.html
* [1] http://dwarfstd.org/
* [2] http://dwarfstd.org/doc/Debugging%20using%20DWARF-2012.pdf

