#include<stdio.h>

int main(){
    int i;
    int n, num;
    int sum = 0;
    scanf("%d", &n);
    for (i=0;i<n;i++){
        scanf("%d", &num);
        sum += num;
        if (sum%num==0){
            printf("%d %d\n", sum, num);
        }
        else{
            continue;
        }
    }
    return 0;
}




/*
int main(){
    int n,i;
    int sum = 0;
    int a[i];
    scanf("%d", &n);
    scanf ("%d",&a[i]);
    for (i=0;i<n;i++){
        sum += a[i];
        printf("%d ", a[i]);
    }
}


/*
int main(){
    int n, i;
    int sum = 0;
    int a[i], b[i];
    scanf("%d", &n);
    scanf("%d",&a[i]);
    for (i=0;i<n;i++){
        sum = sum+a[i];
        printf("%d\t", a[i]);
        //b[i] = sum;
        //printf("%d", b[i]);
    }

    return 0;
}

*/
//
//if ((b[i]%a[i]) == 0) {
//printf("%d %d", b[i], a[i]);
//printf("\n");
//}
// Created by ddes2 on 10/14/2022.
//
