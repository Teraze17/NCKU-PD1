#include<stdio.h>

int main(){
    int p, i, j, n, k;
    scanf ("%d %d", &p, &n);
    switch(p){
        case 1:
            for (i=0;i<n;i++){
                for (j=i;j<n;j++){
                    printf("*");
                }
                printf("\n");
            }
            break;
        case 2:
            for (i=1;i<=n;i++){
                for (j=0;j<i;j++){
                    printf("*");
                }
                printf("\n");
            }
            break;
        case 3:
            for (i=0;i<n;i++){
                for (j=1;j<=i;j++){
                    printf(" ");
                }
                for (k=0;k<n-i;k++){
                    printf("*");
                }
                printf("\n");
            }
            break;
        case 4:
            for (i=0;i<n;i++){
                for (j=2;j<=n-i;j++) {
                    printf(" ");
                }
                for (k=0;k<=i;k++){
                    printf("*");
                }
                printf("\n");

            }
            break;
    }

    return 0;
}







//
// Created by ddes2 on 10/11/2022.
//
