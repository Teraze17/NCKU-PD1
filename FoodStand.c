// FoodStand.c
/* calculate the maximum difference, when there are many points exist*/

#include <stdio.h>
int main()
{
    int min, max, x = 0;
    scanf("%d", &x);
    max = x;
    min = x;
    while (x != -1)
    {
        if (x > max)
            max = x;
        else if (x < min)
            min = x;
        scanf("%d", &x);
    }
    printf("%d", max - min);
}