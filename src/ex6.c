#include <stdio.h>

int main(int argc, char *argv[])
{
    int distance = 100;
    float power = 2.345f;
    double super_power = 56789.4532;
    char initial = 'A';
    char first_name[] = "Zed";
    char last_name[] = "Shaw";

    printf("You are %d miles away.\n", distance);
    printf("You have %f levels of power.\n", power);
    printf("You have %f awesome super powers.\n", super_power);
    printf("I have an initial %c.\n", initial);
    printf("I have a first name %s.\n", first_name);
    printf("I have a last name %s.\n", last_name);
    printf("My whole name is %s %c. %s.\n", first_name, initial, last_name);

    // How many different ways to write a number in C?
    //octal, hexadecimal etc

    int x1 = 12; // normal int
    float x2 = 1.5343f; // float
    float x3 = 483.333; // why the f then?
    int x4 = 016; // base 8, decimal valu is 14
    int x5= 0x23; // base 16 decimal value is 35
    printf("\nx1=%d", x1); 
    printf("\nx2=%f", x2); 
    printf("\nx3=%f", x3); 
    printf("\nx4=%d", x4); 
    printf("\nx5=%d", x5); 





    return 0;
}

