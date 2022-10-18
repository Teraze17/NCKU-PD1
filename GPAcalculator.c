#include<stdio.h>
#include<ctype.h>

int num; //credit
float tc; //total credits
char op, ch; //alphabet and operator
float total, sum = 0; //the sum of the score of subjects
float GPA;

int main(){
    while (1){
        total += sum; //
        //ch = getchar();
        while ( op!='\n') {
            ch = getchar();
            break;
        }
        if (ch == '\n' || op=='\n') {
            break;
        }
        //putchar(ch);
        while (isdigit(ch)){
            num = (int)ch;
            num = num - '0';
            //printf("%d\n", num);
            tc += num;
            ch = getchar();

            if (ch == 'A') {
                op = getchar(); //\n
                if (!(isalnum(op))){
                    switch (op) {
                        case '+':
                            sum = num * 4.3;
                            break;
                        case '-':
                            sum = num * 3.7;
                            break;
                        default:
                            sum = num * 4.0;
                            break;
                    }
                    //printf("%.2f\n", sum);
                    break;
                }
                else{
                    sum = num * 4.0;
                    total += sum;
                    ch = op;
                    continue;
                }
            }

            else if (ch == 'B') {
                op = getchar();
                if (!(isalnum(op))){
                    switch (op) {
                        case '+':
                            sum = num * 3.3;
                            break;
                        case '-':
                            sum = num * 2.7;
                            break;
                        default:
                            sum = num * 3.0;
                            break;
                    }
                    break;
                }
                else{
                    sum = num * 3.0;
                    total += sum;
                    ch = op;
                    continue;
                }
            }

            else if (ch == 'C') { //C
                op = getchar(); //\n
                if (!(isalnum(op))) {
                    switch (op) {
                        case '+':
                            sum = num * 2.3; //4.6
                            break;
                        case '-':
                            sum = num * 1.7;
                            break;
                        default:
                            sum = num * 2.0;
                            break;
                    }
                    break;
                }
                else{
                    sum = num * 2.0;
                    total += sum;
                    ch = op;
                    continue;
                }
            }
            else {
                sum=0;
                continue;
            }

        }
    }
    GPA = total/tc;
    printf("%.2f", GPA);
    return 0;
}

/**************************version 3, correct version************************/
/*
#include<stdio.h>
#include<ctype.h>
//2A+3B+2F1C-3C+1C+2C- = 8.6+9.9+0+1.7+6.9
int num; //credit
float tc; //total credits
char op, ch; //alphabet and operator
float total, sum = 0; //the sum of the score of subjects
float GPA;

int main(){
    while (1){
        total += sum; //
        ch = getchar();
        //putchar(ch);
        if (ch == '\n') {
            break;
        }

        while (isdigit(ch)){
            num = (int)ch;
            num = num - '0'; //3
            //printf("%d", num);
            tc += num;
            //printf("%.2f", tc);
            ch = getchar(); //C

            if (ch == '\n') {
                break;
            }
            //putchar(ch); //C
            if (isalpha(ch)) {
                //putchar(ch); //C
                if (ch == 'A') {
                    op = getchar();//it may be a number, instead of +-
                    //putchar(op);
                    if (!(isalnum(op))){
                        switch (op) {
                            case '+':
                                sum = num * 4.3;  //8.6
                                //printf("%.2f\n", sum); //8.6
                                break;
                            case '-':
                                sum = num * 3.7;
                                break;
                            default:
                                sum = num * 4.0;
                                break;
                        }
                        //printf("%.2f\n", sum);
                    }
                    else{
                        sum = num * 4.0;
                        total += sum;
                        ch = op;
                        continue;
                    }
                }

                else if (ch == 'B') {
                    op = getchar();
                    //putchar(op);
                    if (!(isalnum(op))){
                        switch (op) {
                            case '+':
                                sum = num * 3.3;
                                //printf("%.2f\n", sum); //9.9
                                break;
                            case '-':
                                sum = num * 2.7;
                                break;
                            default:
                                sum = num * 3.0;
                                //printf("%.2f\n", sum); //3.0
                                break;
                        }
                        //printf("%.2f\n", sum);
                    }
                    else{
                        sum = num * 3.0;
                        total += sum;
                        ch = op;
                        continue;
                    }
                    break;
                }

                else if (ch == 'C') { //C
                    op = getchar(); //1
                    //putchar(op); //1
                    if (!(isalnum(op))){
                        switch (op) {
                            case '+':
                                sum = num * 2.3; //4.6
                                break;
                            case '-':
                                sum = num * 1.7;
                                break;
                            default:
                                sum = num * 2.0;
                                break;
                        }
                        //printf("%.2f\n", sum);
                    }
                    else{
                        sum = num * 2.0;
                        total += sum;
                        ch = op;
                        continue;
                    }
                    break;
                }
                else {
                    //putchar(op);
                    sum = 0;
                    //printf("%.2f\n", sum);
                    continue;
                }
            }
        }
    }
    //printf("%.2f\n", total);
    //printf ("%.2f\n", tc);
    GPA =total/tc; //
    printf("%.2f", GPA);
    return 0;
}
//3C1B2F1F2F1B2C+
*/

/*********************************version2***************************************/
/*
int num; //credit
float tc; //total credits
char op, ch; //alphabet and operator
float total, sum = 0; //the sum of the score of subjects
float GPA;

int main(){
    while (1){
        total += sum; //total = 8.6+9.9
        ch = getchar(); //3
        //putchar(ch);
        if (ch == '\n') {
            break;
        }

        while (isdigit(ch)){
            num = (int)ch;
            num = num - '0'; //3
            tc += num;
            ch = getchar(); //C

            if (ch == '\n') {
                break;
            }
            //putchar(ch); //C
            if (isalpha(ch)) {
                //putchar(ch); //C
                if (ch == 'A') {
                    op = getchar();//it may be a number, instead of +-
                    //putchar(op);
                    if (!(isalnum(op))){
                        switch (op) {
                            case '+':
                                sum = num * 4.3;  //8.6
                                //printf("%.2f\n", sum); //8.6
                                break;
                            case '-':
                                sum = num * 3.7;
                                break;
                            default:
                                sum = num * 4.0;
                                break;
                        }
                        printf("%.2f\n", sum);
                    }
                    else{
                        ch = op;
                        sum = 0;
                        break;
                    }
                    break;
                }

                else if (ch == 'B') {
                    op = getchar();
                    //putchar(op);
                    if (!(isalnum(op))){
                        switch (op) {
                            case '+':
                                sum = num * 3.3;
                                //printf("%.2f\n", sum); //9.9
                                break;
                            case '-':
                                sum = num * 2.7;
                                break;
                            default:
                                sum = num * 3.0;
                                //printf("%.2f\n", sum);
                                break;
                        }
                        printf("%.2f\n", sum);
                    }
                    else{
                        ch = op;
                        sum = 0;
                        break;
                    }
                    break;
                }

                else if (ch == 'C') { //C
                    op = getchar(); //1
                    //putchar(op); //1
                    if (!(isalnum(op))){
                        switch (op) {
                            case '+':
                                sum = num * 2.3;
                                break;
                            case '-':
                                sum = num * 1.7;
                                break;
                            default:
                                sum = num * 2.0;
                                break;
                        }
                        printf("%.2f\n", sum);
                    }
                    else{
                        ch = op;
                        sum = 0;
                        continue;
                    }
                    break;
                }
                else {
                    //putchar(op);
                    sum = 0;
                    printf("%.2f\n", sum);
                    continue;
                }
            }
        }
    }
    printf("%.2f\n", total);
    //printf ("%.2f\n", tc);
    GPA =total/tc; //
    //printf("%.2f", GPA);
    return 0;
}
//3C1B2F1F2F1B2C+


*/

/***************************version1*****************************/
/*
float GPA;
float sum=0;
float num;
//float total=1;
int A,B,C,F,n;
char c;
int main(){
    while(c = getchar() != EOF) {
        if (c != '\n') {
            //n = getchar();
            if (isdigit(n)) {
                n = n * 10 + n - '0';
                c = getchar();
                if (isalpha(c)) {
                    if (c == 'A') {
                        c = getchar();
                        putchar(c);
                        if (c == '+') {
                            n = n * 4.3;
                            printf("%d", n); //check 2A+
                            sum += n;
                        } else if (c == '-') {
                            n *= 3.7;
                            //printf ("%.2f", total); //check 2A+
                            sum += n;
                        } else {
                            n *= 4.0;
                            //printf ("%.2f", total); //check 2A+
                            sum += n;
                        }
                    } else if (c == 'B') {
                        c = getchar();
                        if (c == '+') {
                            n *= 3.3;
                            //printf ("%.2f", total); //check 2A+
                            sum += n;
                        } else if (c == '-') {
                            n *= 2.7;
                            //printf ("%.2f", total); //check 2A+
                            sum += n;
                        } else {
                            n *= 3.0;
                            //printf ("%.2f", total); //check 2A+
                            sum += n;
                        }
                    } else if (c == 'C') {
                        c = getchar();
                        if (c == '+') {
                            n *= 2.3;
                            //printf ("%.2f", total); //check 2A+
                            sum += n;
                        } else if (c == '-') {
                            n *= 1.7;
                            //printf ("%.2f", total); //check 2A+
                            sum += n;
                        } else {
                            n *= 2.0;
                            //printf ("%.2f", total); //check 2A+
                            sum += n;
                        }
                    } else {
                        c = getchar();
                        n *= 0;
                        //printf ("%.2f", total); //check 2A+
                    }
                }*/
                /*n = getchar();
                if (isdigit(n)){
                    n = n*10 + n - '0';
                    c = getchar();
                    if (isalpha(c)){
                        if (c == 'A'){
                            c = getchar();
                            putchar(c);
                            if(c == '+'){
                                n = n* 4.3;
                                printf ("%d", n); //check 2A+
                                sum += n;
                            }
                            else if (c == '-'){
                                n *= 3.7;
                                //printf ("%.2f", total); //check 2A+
                                sum += n;
                            }
                            else{
                                n *= 4.0;
                                //printf ("%.2f", total); //check 2A+
                                sum += n;
                            }
                        }
                        else if (c == 'B'){
                            c = getchar();
                            if(c == '+'){
                                n *= 3.3;
                                //printf ("%.2f", total); //check 2A+
                                sum += n;
                            }
                            else if (c == '-'){
                                n *= 2.7;
                                //printf ("%.2f", total); //check 2A+
                                sum += n;
                            }
                            else{
                                n *= 3.0;
                                //printf ("%.2f", total); //check 2A+
                                sum += n;
                            }
                        }
                        else if (c == 'C'){
                            c = getchar();
                            if(c == '+'){
                                n *= 2.3;
                                //printf ("%.2f", total); //check 2A+
                                sum += n;
                            }
                            else if (c == '-'){
                                n *= 1.7;
                                //printf ("%.2f", total); //check 2A+
                                sum += n;
                            }
                            else{
                                n *= 2.0;
                                //printf ("%.2f", total); //check 2A+
                                sum += n;
                            }
                        }
                        else {
                            c = getchar();
                            n *= 0;
                            //printf ("%.2f", total); //check 2A+
                        }


                    }
                }*/
                /*if (isalpha(c)){
                    if (c == 'A'){
                        c = getchar();
                            if(c == '+'){
                                total *= 4.3;
                            }
                            else if (c == '-'){
                                total *= 3.7;
                            }
                            else{
                                total *= 4.0;
                            }
                    }
                    else if (c == 'B'){
                        c = getchar();
                            if(c == '+'){
                                total *= 3.3;
                            }
                            else if (c == '-'){
                                total *= 2.7;
                            }
                            else{
                                total *= 3.0;
                            }
                    }
                    else if (c == 'C'){
                        c = getchar();
                            if(c == '+'){
                                total *= 2.3;
                            }
                            else if (c == '-'){
                                total *= 1.7;
                            }
                            else{
                                total *= 2.0;
                            }
                    }
                    else {
                        c = getchar();
                        total *= 0;
                    }


                } */

                /*if (c == '\n'){
                    break;
                }*/
/*            }
        }
    }
    return 0;
}

*/


//
// Created by ddes2 on 10/17/2022.
//
