#include <stdio.h>

int main(int argc, char *argv[]) {
  int i = 0;
  // go through each string in argv
  // why am I skipping argv[0] - because its the program name.
  for (i = 0; i < argc; i++) {
    printf("arg %d: %s\n", i, argv[i]);
  }
  
  // let's make our own array of strings
  char *states[] = {
    "California", "Oregon",
    "Washington", "Texas"
  };

  int num_states = 5;
 
  for (i = 0; i < num_states; i++) {
    printf("state %d: %s\n", i, states[i]);
  }

  // Extra Credit: Figure out what kind of code you can put into the parts of a for-loop
  /*
  for (INITIALIZER; TEST; INCREMENTER) {
    CODE;
  }
  */
  // When the TEST expression is left blank they are evaluated to true
  //for (i = 0 ; ; i += 1 ) {
  //  printf("this loop would run forever.\n");
  //}
  //You may have an initialization and increment expression, but C programmers more commonly use the for(;;) construct to signify an infinite loop.

  // ISO/IEC 9899:1999 §6.8.5.3 The for statement
  //for ( clause-1 ; expression-2 ; expression-3 ) statement

  // What is the comma operator?
  // http://stackoverflow.com/questions/276512/what-is-the-full-for-loop-syntax-in-c-and-others-in-case-they-are-compatible

  //Read what a NULL is and try to use it in one of the elements of the states array to see what it'll print.
  //See if you can assign an element from the states array to the argv array before printing both. Try the inverse.



  return 0;
}
