#include<stdio.h>
#include<ctype.h>

//harry james potter;albus perCIval WulFric brian DUMbledore.4
//RoNald BILius WeaSLey,HeRmione JEAN Granger;SeVerus snape.draco LuCIus Malfoy;

int main(){
    int i=0, n;
    char c,str[100],p;
    scanf("%d\n",&n);
    c = getchar();
    c = toupper(c);
    putchar(c);
    c=getchar();
    while(1){
        //str[0] = toupper(str[1]);
        c = tolower(c); //the second alphabet turn to lowercase
        putchar(c);
        //str[i] = c;
        //printf("%c",c);
        c = getchar(); //absorb punct

        if (isspace(c) ){ /*|| c==';' ||c==','||c=='.'){*/
            putchar(c); //output the space
            //printf("\n"); //not put in here
            //printf(" ");
            //i++;
            c = getchar(); //eat the capital word
            c = toupper(c); //turn to upper
            putchar(c);//print the capital
            c=getchar();
            continue;
            //break; //test if it encounter the space
            //str[i] = c; //it just add more space
            //printf("%c", c);

        }
        else if ( c==';' ||c==','||c=='.'){ //ispunct
            //printf("\n");
            //i++; //no use
            printf("\n");
            c = getchar(); //eat the capital word
            if (isalpha(c)){
                c = toupper(c); //turn to upper
                putchar(c); //name: RHSD
                c = getchar();
            }
            else{
                printf("\n");
                break;
            }
            /*c = toupper(c); //turn to upper
            putchar(c); //name: RHSD
            c = getchar();*/
            //break; //test if it encounter the space
            //str[i] = c; //it just add more space
            //printf("%c", c);
            //printf("\n");
        }
        if (c == '\n'){ //enter
            break;
        }
        /*else if(isupper(c)){
            c = getchar();
            c=tolower(c);
            putchar(c);
            str[i++] = c;
        }*/
        //break; //testfor every single char
        //str[i++] = c;
        //if (islower(c)){
        //  c = toupper(c);
        //}
        //str[i++] = c;


    }
    //str[i]='\0';
    //printf(str);
    return 0;
}


/*
int main(){
    int i=1;
    char c1, c2;
    char str[100];
    for (;i<100;i++){
        str[0]=getchar();
        str[0]=toupper(str[0]);
        str[i] = c1;
        if (c1==';'||','||'.'){
            c1 = getchar();
            c1 = toupper(c1);
            printf("\n");
        }
        printf("%s", str[i]);
    }
    //printf("%s", str[i]);
}

*/
/*while (1){
    //printf("\n");
    c1 = getchar();
    str[i++] = c1;
    if (c1==';'||','||'.'){
        c1 = getchar();
        c1 = toupper(c1);
        printf("\n");
    }
    //c1 = toupper(c1);
    //putchar(c1);
    printf("%s", str[i]);

}

return 0;
}
*/



//
// Created by ddes2 on 10/16/2022.
//
