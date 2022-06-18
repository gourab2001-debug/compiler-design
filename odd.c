#include<stdio.h>
#define MAX 20

int main() {
    char str[MAX], state = 'a';
    int i ;
    printf("Enter the String over {0,1}: ");
    scanf("%s", str);

    for(i = 0; str[i]!='\0'; i++) {
        switch (state)
        {
        case 'a':
            if(str[i]=='0' || str[i] == '1')  state = 'b';
            else {
                printf("Invalid String\n");
                return 0;
            }
            break;
        case 'b':
            if(str[i]=='0' || str[i] == '1')  state = 'a';
            else {
                printf("Invalid String\n");
                return 0;
            }
            break;
        }
    }

    if(state == 'b') printf("%s is accepted by the recognizer.\n", str);
    else printf("%s is not accepted by the recognizer.\n", str);

    return 0;
}