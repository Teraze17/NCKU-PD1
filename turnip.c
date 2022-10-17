#include <stdio.h>

int main() {
    int x;
    float p0, p1, p2, p3, p4, p5;
    scanf ("%f", &p0); //you cannot use %.1f
    for (x=1;x<=5;x++){
        switch (x) {
            case 1:
                p0 = (0.9 * p0) + (0.1 * 0) + (-51.0);
                p1 = ((-0.98) * p0) + 153;
                printf("%.1f", p1);
                break;
            case 2:
                p1 = (0.9 * p1) + (0.1 * p0) + (-51.0);
                p2 = ((-0.98) * p1) + 153;
                printf(" %.1f", p2);
                break;
            case 3:
                p2 = (0.9 * p2) + (0.1 * p1) + (-51.0);
                p3 = ((-0.98) * p2) + 153;
                printf(" %.1f", p3);
                break;
            case 4:
                p3 = (0.9 * p3) + (0.1 * p2) + (-51.0);
                p4 = ((-0.98) * p3) + 153;
                printf(" %.1f", p4);
                break;
            case 5:
                p4 = (0.9 * p4) + (0.1 * p3) + (-51.0);
                p5 = ((-0.98) * p4) + 153;
                printf(" %.1f", p5);
                break;


        }
    }
    return 0;
}
/*
h{t+1} = w * x{t} + u * h{t} + b
        y{t+1} = f(u' * h{t+1} + b')
(w, u, b, u', b') = (0.9, 0.1, -51, -0.98, 153)
*/

//
// Created by ddes2 on 10/12/2022.
//
