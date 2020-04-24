#include<stdio.h>
int main()
{
    int i = 0;
    for (printf("i\n"); i < 2 && printf("t\n"); ++i && printf("f\n"))
    {
        printf("telo\n");
    }
    return 0;
}
