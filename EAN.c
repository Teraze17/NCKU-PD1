#include <stdio.h>

int main(void){
    int ck,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12;
    int a, b, x, y, z;
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1,&i2,&i3,&i4,&i5,&i6,&i7,&i8,&i9,&i10,&i11,&i12);
    a = i2 + i4 +i6 + i8 + i10 + i12;
    b = i1 + i3 + i5 + i7 + i9 + i11;
    x = a * 3 + b;
    y = x - 1;
    z = y % 10;
    ck = 9 - z;
    printf ("%d", ck);
    return 0;
}
//
// Created by ddes2 on 9/23/2022.
//
