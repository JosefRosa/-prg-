#include <stdlib.h>  
#include <stdio.h>  
#include <string.h>

int main()
{
    char str[] ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int length = strlen(str);
    char code;
    printf("\n vypsat znaky pod sebou:\n");
    for (int i = 0; i < length; i++)
    printf("%c: %d\n", str[i], str[i]);
    for (int i = 0; i < length; i++)
    {
        if('A' < str[i] && str[i] < 'Z')
        {
            code = str[i] + 26;
            if(code > 'Z') code = code - 26;
        }
        else code = str[i];
        printf("%c",code);
    
    }
    return 0;
}
