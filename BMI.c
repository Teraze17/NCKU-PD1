#include <stdio.h>
#include <math.h>

int main(){
    //float x, y; float tmp ,BMI;
    int y, x;
    float BMI, tmp;
    scanf ("%d", &x);
    scanf ("%d", &y);
    tmp = (float)x / 100;
    //tmp = 0.0001f * pow(x,2);
    BMI = (float)y / powf(tmp,2);
    printf ("%.6f", BMI) ;
    return 0;
}