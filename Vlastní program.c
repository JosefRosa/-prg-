#include <stdio.h>
#define vyska 1
#define sirka 2
#define hloubka 3 
int main()

{ 
    int pole[vyska][sirka][hloubka];
    int a, b, c;
for(a = 0; a < vyska; a++)
for(b = 0; b < sirka; b++)
for(c = 0; c < hloubka; c++)  
    pole[a][b][c] = 0;
for(a = 0; a < vyska; a++)
for(c = 0; c < hloubka; c++) 
   {    
    for (b = 0; b < sirka; b++)
    printf("$, ", pole[a][b]);   
    printf("#, ", pole[c]);
    }
    return 0;

}
