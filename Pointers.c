#include<stdio.h>
void main()
{
    int number = 10;
    int *number_pointer = &number;
    printf("Value of number: %d\n", number);
    printf("Address of number: %u\n", &number);
    printf("Value of number_pointer: %u\n", number_pointer);
    printf("Address of number_pointer: %u\n", &number_pointer);
    printf("Value of *number_pointer: %d\n", *number_pointer);
}