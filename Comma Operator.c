#include<stdio.h>
int main(){
    int num1,num2,result;
    result=(num1=5,num2=num1+10,num1+num2);
    printf("Result = %d\n", result);

}
