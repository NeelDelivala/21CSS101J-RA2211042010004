#include<stdio.h>

int main(){
printf("Registration NO.:RA2211042010004\n");

float meter;
float kilometer;

printf("Enter value of meter:");
scanf("%f", &meter);

kilometer= meter/1000;

printf("%0.3f meter is %0.3f kilometer", meter , kilometer);

}
