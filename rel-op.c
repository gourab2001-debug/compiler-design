// C program to recognize the relational operators in c
#include <stdio.h>
#define MAX 3

int main() {
    char str[MAX], state = 'a';
    int i ;
    printf("Enter the string : ");
    scanf("%s", str);

    for(i = 0; str[i]!='\0'; i++){
        switch(state){
            case 'a':
                if(str[i]=='>' || str[i]=='<') state = 'b';
                else if (str[i] == '!' || str[i] == '=') state = 'c';
                else {
                    printf("Invalid relational operator.");
                    return 0;
                }
            break;
            case 'b':
                if(str[i]=='=') state = 'd';
                else {
                    printf("Invalid relational operator.");
                    return 0;
                }
            break;
            case 'c':
                if(str[i]=='=') state = 'd';
                else {
                    printf("Invalid relational operator.");
                    return 0;
                }
            break;
        }
    }

    if(state == 'b'||state == 'd'){
        printf("%s is valid relational operator", str);
    }

    return 0;
}