#include <stdio.h>

int main() 
{
  int bugs = 100; 
  double bug_rate = 1.2;

  printf("You have %d bugs at the imaginary rate of %f.\n",
    bugs, bug_rate);

  long universe_of_defects = 1L * 1024L * 1024L * 1024L * 1024L * 1024L * 1024;

  printf("The entire universe has %ld bugs.\n", universe_of_defects);
  printf("The entire universe has %.10e bugs.\n", (double)universe_of_defects);
  
  double expected_bugs = bugs * bug_rate;
  printf("You are expected to have %f bugs. \n", expected_bugs);
  
  double part_of_universe = expected_bugs / universe_of_defects;
  printf("That is only a %e portion of the universe.\n", part_of_universe);
  
  // this makes no sense, just a demo of something weird
  char nul_byte = '\0';
  int care_percentage = bugs * nul_byte;
  printf("Which means you should care %d%%.\n", care_percentage);
  
  printf("\nPrinting out that nul_byte variable too with %%c and %%s.: \n");

  printf("Nulbyte with %%c = %c\n", nul_byte);

  return 0;
}
