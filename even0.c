#include <stdio.h>
#define MAX 100

int main()
{
    char str[MAX], state = 'a';
    int i;
    printf("Enter the string over {0,1} : ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        switch (state)
        {
        case 'a':
            if (str[i] == '0')
                state = 'b';
            else if (str[i] == '1')
                state = 'a';
            else
            {
                printf("Invalid String\n");
                return 0;
            }
            break;
        case 'b':
            if (str[i] == '0')
                state = 'a';
            else if (str[i] == '1')
                state = 'b';
            else
            {
                printf("Invalid String\n");
                return 0;
            }
            break;
        }
    }

    if (state == 'a')
    {
        printf("%s is accepted by the recognizer\n", str);
    }
    else
    {
        printf("%s is not accepted by the recognizer\n", str);
    }
    return 0;
}