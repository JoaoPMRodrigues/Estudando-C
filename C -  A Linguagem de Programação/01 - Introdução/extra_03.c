# include <stdio.h>

int main() 
{ 
    float i,j;
    i=1.0;
    j=10.0;
    while (i<=j) 
        i = i * 2;
    printf("%4.0f\n", i);
    return 0;
}