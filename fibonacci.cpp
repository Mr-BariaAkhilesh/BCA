#include<stdio.h>
int main() 
{
    int i, j = 1, k = 1;
    printf("%d\n", j);
    for (i = 0; i < 10; i++)
     {
        printf("%d\n", k);
        int temp = j;
        j = k;
        k = temp + k;
    }
    return 0;
}