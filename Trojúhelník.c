#include <stdio.h>
 
int main() {
    int a,b,c;
 
    int h=10;
 
    for(a=1;a<=h;a++)
    {
        for(b=h-1;b>=a;b--)
    {
        printf(" ");
    }
    for(c=1;c<=a;c++)
    {
        printf("* ");
    }
    printf("\n");
    }



return 0;
}
