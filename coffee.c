#include <stdio.h>
#define AMERICANO  110
#define LATTE      150
#define CAPPUCCINO 135
#define MOCHA      145

int main() {
    int i, j, sum;
    scanf ("%d %d", &i,&j);
    if (i==1) {
        sum = 110*j;
        printf ("The total price is %d dollars!", sum);
    }
    else if (i==2) {
        sum = 150*j;
        printf ("The total price is %d dollars!", sum);
    }
    else if (i==3){
        sum = 135*j;
        printf ("The total price is %d dollars!", sum);
    }
    else if (i==4) {
        sum = 145*j;
        printf ("The total price is %d dollars!", sum);
    }
    else
        printf ("Wait, what?");

    return 0;
}