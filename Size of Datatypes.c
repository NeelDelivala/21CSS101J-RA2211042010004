#include<stdio.h>
int main() {
printf("Registration NO.:RA2211042010004\n");

    int intType;
    float floatType;
    double doubleType;
    char charType;

    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    printf("Size of char: %zu byte\n", sizeof(charType));

    return 0;
}
