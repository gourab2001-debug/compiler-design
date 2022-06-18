#include <stdio.h>
#define MAX 100

int main() {
    char str[MAX], state = 'a';
    int i;
    printf("Enter the string over {0,1} : ");
    scanf("%s", str);

    for(i = 0; str[i]!='\0'; i++) {
        switch (state)
        {
        case 'a':
            if(str[i]=='0')  state = 'a';
            else if (str[i]=='1') state = 'b';
            else {
                printf("Invalid String\n");
                return 0;
            }
            break;
        case 'b':
            if(str[i]=='0')  state = 'c';
            else if (str[i]=='1') state = 'b';
            else {
                printf("Invalid String\n");
                return 0;
            }
            break;
        case 'c':
            if(str[i]=='0')  state = 'd';
            else if (str[i]=='1') state = 'b';
            else {
                printf("Invalid String\n");
                return 0;
            }
            break;
        case 'd':
            if(str[i]=='0')  state = 'd';
            else if (str[i]=='1') state = 'd';
            else {
                printf("Invalid String\n");
                return 0;
            }
            break;
        }
    }

    if(state == 'd') {
        printf ("%s is accepted by the recognizer\n", str);
    }
    else {
        printf ("%s is not accepted by the recognizer\n", str);
    }
    return 0;
}