#include <stdio.h>

int main(int argc, char *argv[])
{

  int areas[] = {10, 12, 13, 14, 20};
  char name[] = "Zed";
  char full_name[] = {
    'Z', 'e', 'd',
    ' ', 'A', '.', ' ',
    'S', 'h', 'a', 'w', '\0'
  };



  
  // WARNING: On some systems you may have to change the
  // %ld in this code to a %u since it will use unsigned ints
  printf("The size of an int: %ld\n", sizeof(int));
  printf("The size of areas (int[]): %ld\n", sizeof(areas));
  printf("The number of ints in areas: %ld\n", sizeof(areas) / sizeof(int));
  printf("The first area is %d, the 2nd %d. \n", areas[0], areas[1]);
  
  printf("The tenth area is %d \n", areas[10]);

  printf("The size of a char: %ld\n", sizeof(char));
  printf("The size of name (char[]): %ld\n", sizeof(name));
  printf("The number or chars: %ld\n", sizeof(name) / sizeof(char));

  printf("The size of full_name (char[]): %ld\n",sizeof(full_name));
  printf("The number of chars: %ld\n", sizeof(name) / sizeof(char));

  printf("The size of full_name (char[]): %ld\n", sizeof(full_name));
  printf("The number of chars: %ld\n", sizeof(full_name) / sizeof(char));

  printf("The 1st letter of full_name is: %c\n", full_name[0]);
  printf("The 13th letter of full_name is: %c\n", full_name[13]);

  printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);


  //Try assigning to elements in the areas array with areas[0] = 100; and similar.
  printf("\n Assigning areas[0] = 100 \n");
  areas[0] = 100;
  printf("The size of areas (int[]): %ld\n", sizeof(areas));
  printf("The number of ints in areas: %ld\n", sizeof(areas) / sizeof(int));
  printf("The first area is %d, the 2nd %d. \n", areas[0], areas[1]);
 

  /*printf("\n Begin print out of 1000 letters of fullname \n");
  int i = 0;
  while(i < 1000) {
    printf("%c", full_name[i]);
    i += 1;
  }*/




  return 0;
}

