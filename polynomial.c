#include <stdio.h>

int main(void){
    int a = 7, b = 8, c = 6;
    float x, y;
    scanf ("%f", &x);
    y = a * x * x * x * x - b * x * x * x - x * x + c * x - 22;
    printf ("%.1f", y);
    return 0;
}

//
// Created by ddes2 on 9/15/2022.
//
