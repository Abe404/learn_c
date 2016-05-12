#include <stdio.h>

int main (int argc, char *argv[])
{
  int numbers[4] = {0};

  char name[4] = {'a', 'a', 'a', 'a'};
  char *name2 = "aaaa";
  
  // first, print them out raw
  printf("numbers: %d %d %d %d \n",
          numbers[0], numbers[1],
          numbers[2], numbers[3]);

  printf("name each: %c %c %c %c\n",
          name[0], name[1],
          name[2], name[3]);

  printf("name: %s\n", name);

  // setup the numbers
  numbers[0] = 1;
  numbers[1] = 2;
  numbers[2] = 3;
  numbers[3] = 4;

  // setup the name
  name[0] = 'Z';
  name[1] = 'e';
  name[2] = 'd';
  name[3] = '\0';

  // then print them out initialized
  printf("numbers: %d %d %d %d\n",
        numbers[0], numbers[1],
        numbers[2], numbers[3]);

  printf("name each: %c %c %c %c\n",
          name[0], name[1],
          name[2], name[3]);

  // print the name like a string
  printf("name: %s\n", name);

  // another way to use name
  char *another = "Zed"; 

  printf("another: %s\n", another);

  printf("another each: %c %c %c %c\n",
          another[0], another[1],
          another[2], another[3]);

  printf("Assign characters into numbers and then print 1 char at a time\n"); 
  numbers[0] = name;
  printf("numers[0] = %d\n", numbers[0]);
  printf("numers[1] = %d\n", numbers[1]);
  printf("numers[2] = %d\n", numbers[2]);
  printf("numers[3] = %d\n", numbers[3]);

  printf("Assign numbers into name and then print 1 char at a time\n"); 
  name[0] = numbers;
  printf("name each: %c %c %c %c\n",
          name[0], name[1],
          name[2], name[3]);

  
  char four_bytes[4] = {'a','b', 'c','d'};
  int one_int = 3;
  
  int number_array[3]  = { 1,2 };
  printf("first int = %d\n", number_array[0]);
  printf("second int = %d\n", number_array[1]);
  
  // assign char array to ints
  printf("\nAssing char array to number_array[2]\n");
  number_array[2] = four_bytes;  
  printf("third int = %d\n", number_array[2]);
   

  return 0;
} 

