#include<stdio.h>
int main(){
    float celsius, far;
    printf("put the value in celsius \n");
    scanf("%f", &celsius);
    far = (celsius * 9/5) + 32;
    printf("value of celsius in fehrenheit is %f", far);   
    return 0;
}